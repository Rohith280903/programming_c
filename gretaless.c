#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is greater\n",a);
	}
	else if(a==b)
	{
		printf("%d is equal to %d\n",a,b);
	}
	else
	{
		printf("%d is lesser than %d\n",a,b);
	}
	printf("thank you\n");
}

