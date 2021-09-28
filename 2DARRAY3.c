#include<stdio.h>
#include<conio.h>

void main(){
	
	int i,j,a[3][3],sum=0;
	
	printf("\nenter 9 numbers :");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
		sum = sum + a[i][j];
	}
	
	printf("\nThe sum is %d",sum);
	
	
	getch();
}
