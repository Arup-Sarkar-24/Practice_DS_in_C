#include <stdio.h>
void swap(int *a,int *b)
{
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;
 printf("%d & %d",*a,*b);
}
void name()
{
	char name[100];
	printf("Enter the user name : ");
	gets(name);
	printf("Hello %s",name);
}
int main ()
{
	int x,y;
	name();
	//printf("Enter the first no = ");
	//scanf("%d",&x);
	//printf("Enter the second no = ");
	//scanf("%d",&y);
	//swap(&x,&y);
	return 0;
}
