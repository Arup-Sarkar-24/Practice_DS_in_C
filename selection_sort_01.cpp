#include<stdio.h>
void printArray(int *A,int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void select(int *A,int n){
	printf("Running Selection sort...\n");
	int x;
	for(int i=0;i<n-1;i++){
		x=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[x]){
				x=j;
			}
		}
		int temp=A[i];
		A[i]=A[x];
		A[x]=temp;
	}
}
int main(){
	int A[]={3,5,2,13,12,4,0,15,8,6,3,7};
	
	int n = sizeof(A)/sizeof(A[0]);
	//printf("%d\n",n);
	printArray(A,n);
	select(A,n);
	printArray(A,n);
	return 0;
}
