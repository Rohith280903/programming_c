#include<stdio.h>
#include<string.h>
main()
{
	char s1[10],s2[20];
	printf("Enter two strings\n");
	gets(s1);
	gets(s2);
	int compare=strcmp(s1,s2);
	printf("----------------------\n");
	printf("%d\n",compare);
	printf("----------------------\n");
	strrev(s1);
	printf("Reversed string is %s\n",s1);
	printf("----------------------\n");
	char info='a';
	printf("%c\n",info+1);
	printf("%d\n",info+1);
	printf("----------------------\n");
	strupr(s2);
	printf("%s\n",s2);
	printf("----------------------\n");
	strlwr(s2);
	printf("%s\n",s2);
	
	
}
