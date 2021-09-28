#include<stdio.h>
#include<conio.h>

void prime(int );

void main()
{
	int a;
	clrscr();
	printf("\nEnter a number :");
	scanf("%d",a);
	prime(a);
	getch();
}
void prime(int a)
{
	int i,count;
	count = 0;
	for(i=2;i<a;i++)
	{
	 if(a%i == 0)
	 {
	  count++;
	 }
	}
	if(count==0)
	{
	 printf("\nThe number %d is a prime number",a);
	}
	else
	{
	 printf("\nThe number %d is a composite number",a);
	}
}