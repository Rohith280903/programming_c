#include<stdio.h>
main()
{
	
	int a[5];
	int i,sum=0;
	printf("enter elements\n ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("the sum of 5 elements is\n");
	for(i=0;i<5;i++)
	    sum=sum+a[i];
	printf("%d\n",sum);
}
