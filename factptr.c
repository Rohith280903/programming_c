#include<stdio.h>
int main()
{
    int n,i;
    int *p=&n;
    int fact=1;
    printf("enter the number you want factorial");
	scanf("%d",&n);
	for(i=1;i<=*p;i++)
	{
		fact=i*fact;		
	}
	printf("%d",fact);	
}
