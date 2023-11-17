#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p;
	int n,m,i;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&(*(p+i)));
	printf("Entered elements are\n");
	
	for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
	
	
	printf("\nEnter how many new set of numbers\n");
	scanf("%d",&m);
	p=(int *)realloc(p,m*sizeof(int));
	
	printf("Enter %d elements\n",m);
	for(i=n;i<m;i++)
	scanf("%d",&(*(p+i)));
	printf("Entered elements are\n");
	
	for(i=0;i<m;i++)
	printf("%d\t",*(p+i));
	
	
	free(p);

}
