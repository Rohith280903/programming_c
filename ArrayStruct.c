//WAP creating a structure team with data of rank and average of total 5 teams
#include<stdio.h>
struct team
{
	int rank;
	float avg;
};
main()
{
	struct team t[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter details of team %d\n",i+1);
		scanf("%d",&t[i].rank);
		scanf("%f",&t[i].avg);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter details of team %d\n",i+1);
		printf("Rank   : %d\n",t[i].rank);
		printf("Average: %0.2f\n",t[i].avg);
	}
}
