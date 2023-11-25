
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
	a->total_size=tsize;
	a->used_size=usize;
	a->ptr=(int *)malloc(tsize * sizeof(int));
}
void show(struct myArray a){
	for(int i=0;i<a->used_size;i++){
		printf("%d\n",(a->ptr)[i]);
	}
}
void setval(struct myArray a){
	int n;
	for(int i=0;i<a->used_size;i++){
		printf("Enter element %d",i);
		scanf("%d\n",&n);
		(a->ptr)[i]=n;
	}
}

int main(){
	struct myArray marks;
	createArray(&marks,10,2);
	setval(&marks);
	show(&mark);	
return 0;
}
