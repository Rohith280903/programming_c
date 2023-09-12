//With return type and with argument type
#include<stdio.h>

int add(int,int);//declaration
main()
{
int sum=add(4,6);//calling
printf("The Sum is %d\n",sum);
}
int add(int a, int b)
{
return(a+b);
}

