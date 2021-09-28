#include<stdio.h>
#include<conio.h>

struct emp
{
	char name[20];
	int day;
	char month[10];
	int year;
	int salary;
};

void main(){
	struct emp p1,p2,p3;
	int choice,c2,c3,c4;
	printf("\nInput values of the three employees :");
	
	printf("\n1.1st employee :");
	printf("\nname :");
	scanf("%s",p1.name);
	printf("\ndate of joining :");
	scanf("%d",&p1.day);   
	printf("\nmonth of joining :");                                        
	scanf("%s",p1.month);
	printf("\nYear of joining :");
	scanf("%d",&p1.year);
	printf("\nsalary :");
	scanf("%d",&p1.salary);
	
    printf("\n2.2nd employee :");
	printf("\nname :");
	scanf("%s",p2.name);
	printf("\ndate of joining :");
	scanf("%d",&p2.day);                                                  
	printf("\nMonth of joining :");
	scanf("%s",p2.month);
	printf("\nYear of joining :");
	scanf("%d",&p2.year);
	printf("\nsalary :");
	scanf("%d",&p2.salary);
	
    printf("\n3.3rd employee :");
	printf("\nname :");
	scanf("%s",p3.name);
	printf("\ndate of joining :");
	scanf("%d",&p3.day);                                                  
	printf("\nMonth of joining :");
	scanf("%s",p3.month);
	printf("\nYear of joining :");
	scanf("%d",&p3.year);
	printf("\nsalary :");
	scanf("%d",&p3.salary);
	
	printf("\nSelect information of any one employee");
	
	scanf("%d",&choice);
    switch(choice){
    	case 1:
    		printf("Enter a choice of information :");
    		printf("\n1.Name");
    		printf("\n2.Date");
    		printf("\n3.Salary");
    		printf("\n4.All of the above");
    		scanf("%d",&c2);
    		switch(c2){
    			case 1:
    				printf("\nName : %s",p1.name);
    				break;
    				
    			case 2:
    				printf("\nDate : %d %s %d",p1.day,p1.month,p1.year);
    				break;
    				
    			case 3:
    				printf("\nSalary : %d",p1.salary);
    				break;
    				
    			case 4:
    				printf("\nName : %s \nDate of joining : %d %s %d \nSalary : %d",p1.name,p1.day,p1.month,p1.year,p1.salary);
    				break;
    				
    			default:
    				printf("\t\t\t\t\t\t\t\t\t\nInvalid choice");
			}
    		break;
    		
    	case 2:
    	    printf("Enter a choice of information :");
    	    printf("\n1.Name");
    		printf("\n2.Date");
    		printf("\n3.Salary");
    		printf("\n4.All of the above");
    		scanf("%d",&c3);
    		switch(c3){
    			case 1:
    				printf("\nName : %s",p2.name);
    				break;
    				
    			case 2:
    				printf("\nDate : %d %s %d",p2.day,p2.month,p2.year);
    				break;
    				
    			case 3:
    				printf("\nSalary : %d",p2.salary);
    				break;
    				
    			case 4:
    				printf("\nName : %s \nDate of joining : %d %s %d \nSalary : %d",p2.name,p2.day,p2.month,p2.year,p2.salary);
    				break;
    				
    			default:
    				printf("\t\t\t\t\t\t\t\t\t\nInvalid choice");
			}
			break;
    		
    	case 3:
    		printf("Enter a choice of information :");
    		printf("\n1.Name");
    		printf("\n2.Date");
    		printf("\n3.Salary");
    		printf("\n4.All of the above");
    		scanf("%d",&c4);
    		switch(c4){
    			case 1:
    				printf("\nName : %s",p3.name);
    				break;
    				
    			case 2:
    				printf("\nDate of joining : %d %s %d",p3.day,p3.month,p3.year);
    				break;
    				
    			case 3:
    				printf("\nSalary : %d",p3.salary);
    				break;
    				
    			case 4:
    				printf("\nName : %s \nDate of joining : %d %s %d \nSalary : %d",p3.name,p3.day,p3.month,p3.year,p3.salary);
    				break;
    				
    			default:
    				printf("\t\t\t\t\t\t\t\t\t\nInvalid choice");
			}
    		break;
    		
    	default:
            printf("\t\t\t\t\t\t\t\t\t\nInvalid choice");
	}
	getch();
}
