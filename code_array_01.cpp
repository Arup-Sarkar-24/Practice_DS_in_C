
#include<stdio.h>
#include<stdlib.h>
#include<string>
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};
void createArray(struct myArray * a,int tsize, int usize){
	(*a).total_size=tsize;
	(*a).used_size=usize;
	(*a).ptr=(int*)malloc(tsize*sizeof(int));
}
//void show(struct myArray *a){
//	int n;
//	for(int i =0;i<a->used_size;i++){
//		printf("%d\n",&n);
//		(a->ptr)[i]=n;
//	}
//}
//void setval(struct myArray *a){
//	for(int i =0;i<a->used_size;i++){
//		printf("Enter element %d = ",i+1);
//		scanf("%d",(a->ptr)[i]);
//	}
//}
int show2(struct myArray *a){
		for(int i =0;i<a->used_size;i++){
		printf("Enter element %d = ",i+1);
		scanf("%d",(a->ptr)[i]);
	}
	int n;
	for(int i =0;i<a->used_size;i++){
		printf("%d\n",&n);
		(a->ptr)[i]=n;
	}
}	
	
int main(){
	struct myArray marks;
	createArray(&marks,10,1);
//	printf("We are running setval now....\n");
//	setval(&marks);
//	printf("We are running show now....\n");
	show2(&marks);	
return 0;
}
