#include<stdio.h>
#include<conio.h>

void main(){
	int a,i,count;
	count=0;
	printf("Enter any number to see whether it is prime or not :");
	scanf("%d",&a);
	
	for(i=2;i<a;i++){
		
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==0){
		printf("\nThe number is prime.");
	}
	else{
		printf("\nThe number is not prime.");
	}
	getch();
}
