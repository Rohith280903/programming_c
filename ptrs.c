#include<stdio.h>
main()
{
int a=10;//4
float b=4.8f;//4
char c='s';//1

void *ptr;//8   void or generic pointer
printf("%d\n",&ptr);//address of ptr
ptr=&a;
printf("%d\n",ptr);//address of a
printf("%d\n",*(int*)ptr);//value of a
ptr=&b;
printf("%d\n",ptr);//address of b
printf("%f\n",*(float*)ptr);//vlaue of b
ptr=&c;
printf("%d\n",ptr);//address of c
printf("%c\n",*(char*)ptr);//value of c
}
