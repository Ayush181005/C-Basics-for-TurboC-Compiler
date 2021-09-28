#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	char a[10],b[10];
	clrscr();
	printf("\nEnter any word :");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
		printf("string is %s",b);
	}
	getch();
}
