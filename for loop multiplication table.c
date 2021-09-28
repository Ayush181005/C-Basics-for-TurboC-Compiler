#include<stdio.h>
#include<conio.h>

void main(){
	int i,a;
	printf("\nEnter a number to get its multiplication table :");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++){
		printf("\n%d*%d=%d",a,i,a*i);
	}
	getch();
}
