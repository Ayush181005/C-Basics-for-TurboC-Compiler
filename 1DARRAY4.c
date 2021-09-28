#include<stdio.h>
#include<conio.h>

int main(){

	int i,j,a[3],temp;

	printf("Enter the values :");

	for(i=0;i<=2;i++){
		scanf("%d",&a[i]);
	}

		for(i=0;i<=2;i++){

			for(j=i+1;j<=2;j++){

				if(a[i]>a[j]){

		      temp = a[i];
		      a[i] = a[j];
		      a[j] = temp;
		  }
	   }
	}

	printf("\nascending order :");
	for(i=0;i<=2;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}
