#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,key,flag=-1;
	printf("\nEnter the value :");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
		printf("Enter key to be found :");
		scanf("%d",&key);
	for(i=1;i<=4;i++){
		if(key == a[i]){
		flag = i;
	 }
	}
		if(flag!=-1){
		printf("\nThe value %d is found at %d.",key,flag);
	 }
		else{
		printf("\nThe value %d is not found.",key);
	 }
	return 0;
}
