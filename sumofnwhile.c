#include<stdio.h>
int main()
{
	int n;
	printf("Enter the n value\t");
	scanf("%d",&n);
	int i=0,sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d is the sum of %d numbers\n",sum,n);
}
