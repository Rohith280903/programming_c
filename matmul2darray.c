#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,m,n,sum,p,k;
	printf("Enter rows and columns of A matrix\n");
	scanf("%d%d",&m,&n);
	printf("Enter elements of matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter rows and columns of B matrix\n");
	scanf("%d%d",&p,&k);
	printf("Enter elements of matrix B:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("elements of matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
			printf("\n");
	}
	
	
	printf("elements of matrix B:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d  ",b[i][j]);
		}
			printf("\n");
	}
	
	if(n!=p)
	{
		printf("multiplication of matrix is not possible\n");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
				sum=0;
				for(k=0;k<n;k++)
				{
					sum=sum+(a[i][k]*b[k][j]);
					c[i][j]=sum;
				}
			}
		}
	
	printf("Multiplication of two matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	}
}

