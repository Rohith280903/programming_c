#include<stdio.h>
struct Student
{
	int roll;
	float cgpa;
	char grade;
};
main()
{
	struct Student s1,s3,s4;
	s1.roll=11;
	s1.cgpa=8.6;
	s1.grade='A';
	printf("Student 1 details\n");
	printf("Roll no : %d\n",s1.roll);
	printf("CGPA    : %0.1f\n",s1.cgpa);
	printf("Grade   : %c\n\n",s1.grade);
	struct Student s2={12,8.7,'A'};
	printf("Student 2 details\n");
	printf("Roll no : %d\n",s2.roll);
	printf("CGPA    : %0.1f\n",s2.cgpa);
	printf("Grade   : %c\n\n",s2.grade);
	printf("copy contents of s2 to s3\n");
	printf("Student 3 details\n");
	s3=s2;
	printf("Roll no : %d\n",s3.roll);
	printf("CGPA    : %0.1f\n",s3.cgpa);
	printf("Grade   : %c\n\n",s3.grade);
	printf("copy few contents of s3 to s4\n");	
	s4.roll=4;
	s4.cgpa=s3.cgpa;
	s4.grade=s3.grade;
	printf("Student 4 details\n");
	printf("Roll no : %d\n",s4.roll);
	printf("CGPA    : %0.1f\n",s4.cgpa);
	printf("Grade   : %c\n\n",s4.grade);	
	
}
