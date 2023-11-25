# include <stdio.h>
int main ()
{
	int i =10;
	int n=1;
	int k=0;
	while(n!=i){
		int k=1;
		printf("the %d is %d \n",k,n*2);
		n++;
		k=k+i;
	}
	printf("%d",i);
	return 0;
}
