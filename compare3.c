#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greater\n",a);
	}
	else if(b>a&&b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
	printf("thank you\n");
}

