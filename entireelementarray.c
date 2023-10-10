#include<stdio.h>
void maximum(int a[],int);
int main()
{
int a[50];
int n;
int i,j;
printf("Enter the number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  	scanf("%d",&a[i]);
}
printf("Enter %d elements are\n",n);
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

printf("The largest element is\n",n);
maximum(a,n);
}
void maximum(int arr[],int size)
{
	int max=arr[0];
	int i;
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d",max);
}






