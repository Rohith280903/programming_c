#include<stdio.h>
#include<string.h>
main()
{
	char s1[];
	printf("Enter the characters\n");
	gets(s1);
	puts(s1);
	int i=0;
	int count=0;
	while(s1[i]!='\0')
	{
		count++;
		i++;
	}
	printf("%d is the no of characters in s1\n",count);
}
