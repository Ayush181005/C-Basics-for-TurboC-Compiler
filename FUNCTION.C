#include<stdio.h>
#include<conio.h>

void add();             //no return type and no argument
int sub();              //with return type and no argument
int mul(int a,int b);   //return type and argument
void div(int a,int b);  //no return type and argument

void main()
{
	int c,a,b;
	clrscr();
	add();
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\nMul:%d",mul(a,b));
	printf("\nsub:%d",sub());
	printf("\nEnter two values:");
	scanf("%d%d",&a,&b);
	div(a,b);
	getch();
}
void add()
{
	int a,b;
	printf("\nEnter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nSum:%d",a+b);
}
int mul(int a,int b)
{
	return a*b;
}
int sub()
{
	int a,b;
	printf("\nEnter two values of a and b:");
	scanf("%d%d",&a,&b);
	return a-b;
}
void div(int a,int b)
{
       printf("\nDiv:%d",a/b);

}