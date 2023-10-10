//largest and smallest element
#include<stdio.h>
main()
{
	int a[5],max=a[0],min,i;
	printf("Enter elements\n")	;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
	if(max<a[i])
	max=a[i];
    }
	printf("%d is largest\n",max);
	for(i=0;i<5;i++)
	{
	if(min>a[i])
	min=a[i];
    }
	printf("%d is smallest\n",min);	
}
