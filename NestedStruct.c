/*WAP structure with the data member employee id,salary and create another
 structure data of date of birth  with 3 data members day,month,year*/
#include<stdio.h> 
struct DOB
{
	int date;
	int month;
	int year;
};
struct employee
{
	int eid;
	float salary;
	int years;
	struct DOB x;//Nested structure
};

main()
{
	struct employee e;
	printf("Enter the details of the employee\n");
	printf("Enter eid and salary\n");
	scanf("%d%f",&e.eid,&e.salary);
	printf("Employee id : %d\nSalary : %f\n",e.eid,e.salary);
	printf("Enter date,month and year\n");
	scanf("%d%d%d",&e.x.date,&e.x.month,&e.x.year);
	printf("Date of birth: %d/%d/%d",e.x.date,e.x.month,e.x.year);
}

