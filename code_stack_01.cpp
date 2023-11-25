//Stack using Array
#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
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
void push(struct stack * ptr,int val){
	if(isfull(ptr)){
		printf("Stack Overflow.Can't push %d to the Stack.\n",val);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
int pop(struct stack * ptr){
	if(isempty(ptr)){
		printf("Stack Underflow.\n");
		return -1;
	}
	else{
		int val =ptr->arr[ptr->top];
		ptr->top--;
		return val;
		
	}
}
int print(struct stack * ptr){
		if(isempty(ptr)){
		printf("Stack Underflow.\n");
		return -1;
	}
	else{
		printf("The Stack is : ");
		for(int i=0;i<=ptr->top;i++){
			printf(" %d ",ptr->arr[i]);
		}
		printf("\n");	
	}		
}
int peak(struct stack * ptr,int i){
	int arrind= ptr->top-i+1;
	if(arrind<0){
		printf("Not a valid position for the stack.\n");
		return -1;
	}
	else{
		return ptr->arr[arrind];
	}
}
int stacktop(struct stack * ptr ){
	return ptr->arr[ptr->top];
}
int stackbottom(struct stack * ptr ){
	return ptr->arr[0];
}
int main(){
	struct stack *sp= (struct stack *) malloc(sizeof(struct stack));
	sp->size=50;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size * sizeof(int));
	printf("Stack has been created successfully.\n");
	//print(sp);
//	printf("Before pushing Full :%d\n",isfull(sp));
//	printf("Before pushing Empty :%d\n",isempty(sp));
	push(sp,41);push(sp,42);push(sp,43);push(sp,44);push(sp,45);
	push(sp,46);push(sp,47);push(sp,48);push(sp,49);push(sp,50);
//	printf("After pushing Full : %d\n",isfull(sp));
//	printf("After pushing Empty :%d\n",isempty(sp));
	print(sp);
//	printf("Poped :%d from the stack.\n",pop(sp));
//	print(sp);
	for(int j =1;j<=sp->top+1;j++){
		printf("The value at position : %d is %d.\n",j,peak(sp,j));
	}
	printf("The top most value of the stack is %d.\n",stacktop(sp));
	printf("The bottom most value of the stack is %d.\n",stackbottom(sp));
	return 0;
}
