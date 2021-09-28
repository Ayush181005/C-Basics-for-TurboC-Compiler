#include<stdio.h>
#include<conio.h>
int reverse();
void main()
{
	int a,b=0;
	clrscr();
	b=reverse();
	printf("reverse of entered no. is %d",b);
	getch();
}

int reverse()
{
	int b,a;
	printf("\nEnter no. to be reversed :");
	scanf("%d",&a);
	while(a!=0)
	{
		b=b*10;
		b=b+(a%10);
		a=a/10;
	}
	return b;
}