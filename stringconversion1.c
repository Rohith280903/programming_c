#include<stdio.h>
#include<stdlib.h>
main()
{
	char num[20];
	printf("---->string to integer\n");
	printf("Enter number in the string\n");
	gets(num);
	printf("%d\n",num+2);
	int i=atoi(num);
	printf("%d\n",i+2);
	int num1;
	printf("----------------------------\n");
	printf("---->Integer to string\n");
	printf("Enter number in integer\n");
	scanf("%d",&num1);
	char a[10];
	itoa(num1,a,2);
	printf("%s",a);
	
}
