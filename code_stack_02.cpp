//Stack using Linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
int isempty(struct node * top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(struct node * top){
	struct node * p = (struct node *)malloc(sizeof(struct node));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

struct node * push(struct node * top,int val){
	if(isfull(top)){
		printf("Stack Overflow.Can't push %d to the Stack.\n",val);
	}
	else{
		struct node * n =(struct node *) malloc(sizeof(struct node));
		n->data=val;
		n->next=top;
		top=n;
		return top;
	}
}

int pop(struct node * *top){
	if(isempty(*top)){
		printf("Stack Underflow.\n");
	}
	else{
		struct node * n =*top;
		*top=(*top)->next;
		int x=n->data;
		free(n);
		return x;
	}
}
int peek(struct node * *top ,int pos){
	struct node * ptr=*top;
	for(int i=0;i<pos-1 && ptr!=NULL;i++){
		ptr=ptr->next;
	}
	if(ptr!=NULL){
		return ptr->data;
	}
	else{
		return -1;
	}
}
void linked(struct node * ptr){
	while(ptr != NULL){
		printf("Element : %d\n",ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	struct node * top= NULL;
	top=push(top,67);
	top=push(top,57);
	top=push(top,78);
//	int element = pop(&top);
//	printf("Popped element id : %d \n",element);
	linked(top);
	for(int i=1;i<=3;i++){
		printf("The value at position : %d is %d.\n",i,peek(&top,i));	
	}
	
	return 0;
}
