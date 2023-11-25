//parenthesis checking using Stack
#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	char *arr;
};
int isempty(struct stack * ptr){
		if(ptr->top==-1){
			return 1;
		}
		else{
			return 0;
		}
	
}
int isfull(struct stack * ptr){
		if(ptr->top==ptr->size-1){
			return 1;
		}
		else{
			return 0;
		}
}
void push(struct stack * ptr,char val){
	if(isfull(ptr)){
		printf("Stack Overflow.Can't push %d to the Stack.\n",val);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
char pop(struct stack * ptr){
	if(isempty(ptr)){
		printf("Stack Underflow.\n");
		return -1;
	}
	else{
		char val =ptr->arr[ptr->top];
		ptr->top--;
		return val;
		
	}
}

int parenthesis(char * exp){
	struct stack * sp;
	sp->size=20;
	sp->top=-1;
	sp->arr=(char *)malloc(sp->size * sizeof(char));
	for (int i=0;exp[i]!='\0',i++){
		printf("hi");
		
	}
}

int main(){

	return 0;
}
