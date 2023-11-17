//WAP creating a union team with data of rank and average of total 5 teams
#include<stdio.h>
union team
{
	int rank;
	float avg;
};
main()
{
	union team t[5];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Rank of team %d\n",i+1);
		scanf("%d",&t[i].rank);
	}
	for(i=0;i<3;i++)
	{
		printf("Rank of team %d\n",i+1);
		printf("Rank   : %d\n",t[i].rank);
	}
	for(i=0;i<3;i++)
	{
		printf("Average of team %d\n",i+1);
		scanf("%f",&t[i].avg);
	}
	for(i=0;i<3;i++)
	{
		printf("Average of team %d\n",i+1);
		printf("Average   : %0.1f\n",t[i].avg);
	}
	
	printf("%d\n",sizeof(t[3]));

}
