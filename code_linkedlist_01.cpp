#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void linked(struct node*ptr){
	printf("Element are : ");
	while(ptr!=NULL){
		printf(" %d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
struct node*insertatfirst(struct node*head,int data){
	struct node*ptr=(struct node *)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
struct node*insertatindex(struct node*head,int data,int index){
	struct node*ptr=(struct node *)malloc(sizeof(struct node));
	struct node*p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
struct node*insertatend(struct node*head,int data){
	struct node*ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=head;
	while(p->next!=NULL){
		p=p->next;
	} 
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
struct node*insertafter(struct node *head,struct node *prevnode,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node ));
	ptr->data=data;
	ptr->next=prevnode->next;
	prevnode->next=ptr;
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
	forth->next=NULL;
	//printf("The linkedlist is.....\n");
//	linked(head);
//	printf("Updated linkedlist is .....\n");
	head=insertatfirst(head,4);
	head=insertatfirst(head,3);
	head=insertatfirst(head,2);
	head=insertatfirst(head,1);
	head=insertatfirst(head,0);
	//linked(head);
	//printf("New linkedlist is .....\n");
	head=insertatindex(head,5,5);
	head=insertatindex(head,6,6);
	head=insertatindex(head,7,7);
	head=insertatindex(head,8,8);
	//printf("New updated linkedlist is .....\n");
	head=insertatend(head,13);
	head=insertatend(head,14);
	head=insertatend(head,15);
	head=insertatend(head,16);
	//linked(head);
	printf("Insert after node,the linkedlist is.......\n");
	head=insertafter(head,second,77);
	linked(head);
	return 0;
}
