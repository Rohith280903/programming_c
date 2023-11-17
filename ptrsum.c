#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	int *pa=&a,*pb=&b;
	int sum;
	sum=*pa+*pb;
	printf("sum=%d",sum);
	return 0;
	
}
