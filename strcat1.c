#include<stdio.h>
#include<string.h>
main()
{
	char s1[]="Rohith";
	char s2[]=" Babu";
	printf("\nfirst string is");
    puts(s1);
    printf("\nSecond string is");
    puts(s2);
    s1=s1+s2;	
	puts(s1);
}
