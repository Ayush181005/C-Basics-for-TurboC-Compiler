#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,i,t;
	printf("\nEnter any two numbers :");
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++){
		t=i%2;
		if(t==0){
			printf("\nEven no. is %d.",i);
		}
		else{
			printf("\nOdd no. is %d.",i);
		}
	}
	getch();
}
