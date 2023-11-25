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
struct node*deleteatfirst(struct node*head){
	struct node*ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
struct node*deleteatindex(struct node*head,int index){
	
	struct node*p=head;
	struct node*q=head->next;
	for(int i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
struct node*deleteatend(struct node*head){
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	} 
	p->next=NULL;
	free(q);
	return head;
}
struct node*deleteafter(struct node *head,int value){
	struct node *p=head;
	struct node *q=head->next;
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	} 
	if(q->data==value){
		p->next=q->next;
		free(q);
	}
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
	printf("Linkedlist before delition :\n");
	linked(head);
	printf("Linkedlist after deliton :\n");
	//head=deleteatfirst(head);
	//head=deleteatfirst(head);
	//head=deleteatindex(head,2);
	//head=deleteatend(head);
	head=deleteatindex(head,10);
	linked(head);
	return 0;
}
