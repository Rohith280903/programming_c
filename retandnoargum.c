//With return type and no argument type
#include<stdio.h>

int add();//declaration
main()
{
int sum=add();//calling
printf("The Sum is %d\n",sum);
}
int add()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d",&a);
scanf("%d",&b);
return(a+b);
}
