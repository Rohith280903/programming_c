//No return type and argument type
#include<stdio.h>

void add(int, int);//declaration
main()
{
add(2,4);//calling
int x,y;
printf("Enter two values: ");
scanf("%d",&x);
scanf("%d",&y);
add(x,y);//calling
}
void add(int a, int b)
{
printf("The Sum is %d\n",a+b);
}
