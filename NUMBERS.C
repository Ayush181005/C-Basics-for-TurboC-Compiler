#include<stdio.h>
#include<conio.h>
void main(){
	int a,i,count;
	clrscr();
	printf("Enter a value :");
	scanf("%d",&a);
	count=0;
	for(i=2;i<a;i++){
	if(a%i==0){
	 count++;
	 }
	}
	if(count==0){
	 printf("\nThe number %d is a prime number.",a);
	}
	else{
	 printf("\nThe number %d is a composite number.",a);
	}
	getch();
}