#include<stdio.h>
void change(int);//decleration
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

printf("The changed elements are\n");
for(i=0;i<n;i++)
{
	change(a[i]);
}
}
void change(int b)
{
	b=b*2;
	printf("%d\t",b);
}






