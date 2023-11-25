#include<stdio.h>
int linsearch(int arr[],int size,int element){
	for (int i=0;i<size;i++){
		if(arr[i]==element){
			return i;
		}
	} 
	return -1;
}
int main(){
	int arr[100]={1,3,40,5,7,9,11,13,15,4,17,19,5,20};
	int size=sizeof(arr)/sizeof(int);
	int element =54;
	int searchindex=linsearch(arr,size,element);
	printf("The element %d was found at index %d \n",element,searchindex);
	return 0;
}
