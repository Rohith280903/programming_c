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
	printf("Enter eid,Salary and Years of experiance\n");
	scanf("%d%f%d",&e.eid,&e.salary,&e.years);
	printf("Enter date,month and year\n");
	scanf("%d%d%d",&e.x.date,&e.x.month,&e.x.year);
	printf("Details of the employee are:\n");
	printf("Employee id : %d\nSalary : Rs.%0.2f/-\nYears of experiance : %d\n",e.eid,e.salary,e.years);
	printf("Date of birth: %d/%d/%d",e.x.date,e.x.month,e.x.year);
}

