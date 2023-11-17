#include<stdio.h>
#include<string.h>
main()
{
	char s1[]="Rohith";
	char s2[]=" Babu";
	strcat(s1,s2);
	puts(s1);
	strncat(s1,s2,3);
	puts(s1);
}
