//With return type and argument type
#include<stdio.h>

int add(int,int);
main()
{
	int sum=add(2,4);
	printf("sum=%d",sum);	
}
int add(int a,int b)
{
	return(a+b);
}
