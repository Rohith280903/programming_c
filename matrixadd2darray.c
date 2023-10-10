#include<stdio.h>
main()
{
	int a[50][50],b[50][50];
	int i,j;
	int r,c;
	printf("Enter number of rows and columns");
	scanf("%d%d",&r,&c);
	printf("Enter A matrix the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the A matrix elements are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	printf("Enter B matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the B matrix elements are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
	printf("\n");
	}
	printf("Sum of two matrices is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
	printf("\n");
	}
}
