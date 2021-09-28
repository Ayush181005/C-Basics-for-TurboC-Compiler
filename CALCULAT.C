#include<stdio.h>
#include<conio.h>

void main(){
 
 int a,b,c,choice;
 textbackground(RED);
 textcolor(BLACK);
 clrscr();
 printf("\nSelect a choice :");
 printf("\n\n1.Addition");
 printf("\n2.Subtraction");
 printf("\n3.Multiplication");
 printf("\n4.Division");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  printf("\nEnter the numbers :");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\nSum is %d",c);
  break;

  case 2:
  printf("\nEnter the numbers");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("\nDifference is %d",c);
  break;

  case 3:
  printf("\nEnter the numbers");
  scanf("%d%d",&a,&b);
  c=a*b;
  printf("\nProduct is %d",c);
  break;

  case 4:
  printf("\nEnter the numbers");
  scanf("%d%d",&a,&b);
  c=a/b;
  printf("\nquotient is %d",c);
  break;

  default:
  printf("\t\t\t\t\t\t\t\t\t\nInvalid choice");
 }
 getch();
}
