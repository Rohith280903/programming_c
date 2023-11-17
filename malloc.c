#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p;
	int n,i;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&(*(p+i)));
	printf("Entered elements are\n");
	
	for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
	
	free(p);

}
