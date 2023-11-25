#include<stdio.h>
void display(int arr[],int n){
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int intinsert(int arr[],int size,int element,int capacity,int index){
	if(size>=capacity){
		return -1;
	}
	for(int i=size-1;i>=index;i--){
		arr[i+1]=arr[i];	
	}
	arr[index]=element;
	return 1;
}
int intdelete(int arr[],int size,int capacity,int index){
	if(index>=capacity){
		return -1;
	}
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];	
	}
	return 1;
}
int main(){
	int arr[100]={1,3,5,7,9,11,13,15};
	int size=10,element = 25, index = 3;
	display(arr,size);
	intinsert(arr,size,element,100,index);
	size+=1;
	display(arr,size);
	intdelete(arr,size,100,index);
	size-=1;
	display(arr,size);
	return 0;
}
