#include<stdio.h>
#include<conio.h>
void add(int ,int );
void sub(int ,int );
void div(int ,int );
void mul(int ,int );
void main()
{
 int a,b,c,choice;
 clrscr();
 printf("\n1.Addition");
 printf("\n2.Subtraction");
 printf("\n3.Division");
 printf("\n4.Multiplication");
 printf("\nEnter your choice :");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 printf("\nEnter two numbers :");
 scanf("%d%d",&a,&b);
 add(a,b);
 break;

 case 2:
 printf("\nEnter two numbers :");
 scanf("%d%d",&a,&b);
 sub(a,b);
 break;

 case 3:
 printf("\nEnter two numbers :");
 scanf("%d%d",&a,&b);
 div(a,b);
 break;

 case 4:
 printf("\nEnter two numbers :");
 scanf("%d%d",&a,&b);
 mul(a,b);
 break;

 }
 getch();
}
void add(int a,int b)
{
 int c;
 c=a+b;
 printf("\nAnswer is %d",c);
}
void sub(int a,int b)
{
 int c;
 c=a-b;
 printf("\nAnswer is %d",c);
}
void div(int a,int b)
{
 int c;
 c=a/b;
 printf("\nAnswer is %d",c);
}
void mul(int a,int b)
{
 int c;
 c=a*b;
 printf("\nAnswer is %d",c);
}