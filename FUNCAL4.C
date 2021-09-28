#include<stdio.h>
#include<conio.h>
int add(int ,int );
int sub(int ,int );
int div(int ,int );
int mul(int ,int );
void main()
{  int a,b,c,choice;

   clrscr();
   printf("\n1.Addition");
   printf("\n2.Subtraction");
   printf("\n3.Division");
   printf("\n4.Multiplication");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
   printf("\nEnter first number :");
   scanf("%d",&a);
   printf("\nEnter second number :");
   scanf("%d",&b);
   c=add(a,b);
   printf("%d",c);
   break;

   case 2:
   printf("\nEnter two numbers :");
   scanf("%d%d",&a,&b);
   c=add(a,b);
   printf("%d",c);

   break;

   case 3:
   printf("\nEnter two numbers :");
   scanf("%d%d",&a,&b);
   c=add(a,b);
   printf("%d",c);
   break;

   case 4:
   printf("\nEnter two numbers :");
   scanf("%d%d",&a,&b);
   c=add(a,b);
   printf("%d",c);
   break;

   }
   getch();
}
int add(int a,int b)
{
     int c;
     c=a+b;
     return c;

}
int sub(int a,int b)
{
     int c;
     c=a+b;
     return c;
}
int div(int a,int b)
{
     int c;
     c=a+b;
     return c;
}
int mul(int a,int b)
{
     int c;
     c=a+b;
     return c;
}