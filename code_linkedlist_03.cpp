//Circular linkedlist 
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void linked(struct node*head){
	struct node*ptr=head;
	printf("Elements are : ");
	do{
		printf(" %d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
	printf("\n");
}
struct node*insertatfirst(struct node*head,int data){
	struct node*ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
int main(){
	struct node*head;
	struct node*second;
	struct node*third;
	struct node*forth;
	//alocate memory for nodes in the link list in heap
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	forth=(struct node*)malloc(sizeof(struct node));
	//link first and second node
	head->data=9;
	head->next=second;
	//link second and third
	second->data=10;
	second->next=third;
	//link third and forth
	third->data=11;
	third->next=forth;
	//terminate the list at the forth node
	forth->data=12;
	forth->next=head;
	head=insertatfirst(head,8);
	head=insertatfirst(head,7);
	head=insertatfirst(head,6);
	linked(head);
	return 0;
}
