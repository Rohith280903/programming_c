#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,b[10][10];
	printf("Enter number of rows and columns");
	scanf("%d%d",&m,&n);
	printf("Enter elements of the A matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j])	;
		}
		
	}
	
	printf("Enter elements of the B matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j])	;
		}
		
	}
	printf("The A matrix is\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j])	;
		}
		printf("\n");
	}
	printf("The B matrix is\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j])	;
		}
		printf("\n");
	}
	printf("Sum of two matrices is\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]+b[i][j])	;
		}
		printf("\n");
	}
}
