//Call by address or Pass by address
#include<stdio.h>

void swap(int *,int *);

main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d",&a);
scanf("%d",&b);
printf("In main(), Before swapping:\n");
printf("a=%d\tb=%d\n",a,b);
swap(&a,&b);
printf("In main(), After swapping:\n");
printf("a=%d\tb=%d\n",a,b);
}
void swap(int *x,int *y)
{
printf("In swap(), Before swapping:\n");
printf("*x=%d\t*y=%d\n",*x,*y);

int c=*x;
*x=*y;
*y=c;

printf("In swap(), After swapping:\n");
printf("*x=%d\t*y=%d\n",*x,*y);
}
