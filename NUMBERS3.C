#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&a);
	if(a>0){
	 printf("\nThe number is positive.");
	}
	else if(a<0){
	 printf("\nThe number is negative.");
	}
	else{
	 printf("\nThe number is 0.");
	}

	if(a%2==0){
	 printf("\nThe number is even.");
	}
	else{
	 printf("\nThe number is odd.");
	}
	getch();
}