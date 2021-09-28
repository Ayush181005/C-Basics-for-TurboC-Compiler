#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,a[2][3];
	printf("\nEnter 6 numbers :");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
