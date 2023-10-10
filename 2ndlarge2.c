#include<stdio.h>
int main()
{
int a[50];
int n;
int i,j;
printf("Enter the number of elements: ");
scanf("%d",&n);

printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("The elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

//Code for Bubble sort
for(i=1;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1])
		{
			int c;
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;
		}
	}
}

printf("\nThe second largest number is");
printf("\n%d",a[n-2]);
}



