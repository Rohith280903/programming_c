#include<stdio.h>
main()
{
	int a[50][50];
	int i,j;
	int r,c;
	printf("Enter number of rows and columns");
	scanf("%d%d",&r,&c);
	printf("Enter the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the elements are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
}
