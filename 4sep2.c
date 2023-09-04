#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter no of lines");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++){		
		printf("%d,%d \n",i,j);
		}
		printf("\n");
	}
	
}
