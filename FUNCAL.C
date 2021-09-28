#include<stdio.h>
#include<conio.h>

void add();
void sub();
void div();
void mul();

void main()
{
	int choice;
	clrscr();
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Division");
	printf("\n4.Multiplication");
	printf("\n\nEnter the choice :");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	add();
	break;

	case 2:
	sub();
	break;

	case 3:
	div();
	break;

	case 4:
	mul();
	break;

	}
	getch();
}
void add()
{
	int n1,n2,ans;

	printf("\nEnter First Number:: ");
	scanf("%d",&n1);
	printf("\nEnter Second Number:: ");
	scanf("%d",&n2);

	ans=n1+n2;

	printf("\nAnswer = %d",ans);

}
void sub()
{
	int n1,n2,ans;

	printf("\nEnter two numbers :");
	scanf("%d%d",&n1,&n2);
	ans = n1-n2;
	printf("\nAnswer = %d",ans);
}
void div()
{
	int n1,n2,ans;

	printf("\nEnter two numbers :");
	scanf("%d%d",&n1,&n2);
	ans = n1/n2;
	printf("\nAnswer = %d",ans);
}
void mul()
{
	int n1,n2,ans;

	printf("\nEnter two numbers :");
	scanf("%d%d",&n1,&n2);
	ans = n1*n2;
	printf("\nAnswer = %d",ans);
}