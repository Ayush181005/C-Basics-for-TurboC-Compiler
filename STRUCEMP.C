#include<stdio.h>
#include<conio.h>

struct personal
{
	char name[20];
	int day;
	char month[10];
	int year;
	float salary;

};

void main()
{
    struct personal person;
    printf("\nInput values:");
    scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
    printf("\nName : %s \nDate of joining : %d %s %d \nSalary : $%f",person.name,person.day,person.month,person.year,person.salary);
    getch();
}








