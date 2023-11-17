#include<stdio.h>
union team 
{
	int rank;
	float avg;
};
main()
{
	union team t;
	printf("Enter the details of the team");
	scanf("%d",&t.rank);
	printf("Rank :%d\n",t.rank);
	scanf("%f",&t.avg);
	printf("Average : %f",t.avg);
}
