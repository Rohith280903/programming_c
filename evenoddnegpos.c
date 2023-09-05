#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a>0&&a%2==0)
	{
		printf("%d is  even postive number\n",a);
	}
	else if(a%2!=0)
	 {
	 	printf("%d is odd positive \n",a);
     }
	else if (a<0&&a%2==0)
	{
		printf("%d is negative even number\n",a);
	}
	else if(a%2!=0)
	{
		printf("%d is negative odd number\n",a)	;
	}	 
	else
	{
		printf("%d is neither negative nor positive\n",a);	
	}
	printf("thank you\n");
}
