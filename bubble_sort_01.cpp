#include<stdio.h>
void printArray(int* A, int n){
	for(int i=0; i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");	
}

void bubbleSort(int *A,int n){
	for(int i=0; i<n-1;i++)//for number of pass
	{   
		for(int j=0; j<n-1-i;j++) //for comparison in each pass
		{
			if (A[j]>A[j+1]){
				int temp = A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}	
}

void bubbleSortAdaptive(int *A,int n){
	int isSorted=0;
	for(int i=0; i<n-1;i++)//for number of pass
	{   
		printf("Working on pass number : %d \n",i+1);
		isSorted=1;
		for(int j=0; j<n-1-i;j++) //for comparison in each pass
		{
			if (A[j]>A[j+1]){
				int temp = A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				isSorted=0;
			}
		}
		if(isSorted){
			return ;
		}
	}	
}

int main(){
	int A[]={112,524,635,47,253,69};
	int A1[]={12,54,65,7,23,9};
	int B[]={1,2,3,4,5,6};
	int B1[]={71,72,73,74,75,76};
	int n=6;
	printArray(A,n);//print the array before sorting
	bubbleSort(A,n);//function to sort the array
	printArray(A,n);//print the array after sorting	
	printf("\n");
	printArray(A1,n);//print the array before sorting
	bubbleSortAdaptive(A1,n);//function to sort the array with adaptive
	printArray(A1,n);//print the array after sorting
	printf("\n");	
	printArray(B,n);//print the array before sorting
	bubbleSort(B,n);//function to sort the array
	printArray(B,n);//print the array after sorting	
	printf("\n");
	printArray(B1,n);//print the array before sorting
	bubbleSortAdaptive(B1,n);//function to sort the array with adaptive
	printArray(B1,n);//print the array after sorting	
	return 0;
}
