#include<stdio.h>
#include<conio.h>

int add();
int sub();
int div();
int mul();

void main()
{
	int ans,choice;
	clrscr();
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Division");
	printf("\n4.Multiplication");
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	ans=add();
	printf("\nAnswer = %d",ans);
	break;

	case 2:
	ans=sub();
	printf("\nAnswer = %d",ans);
	break;

	case 3:
	ans=div();
	printf("\nAnswer = %d",ans);
	break;

	case 4:
	ans=mul();
	printf("\nAnswer = %d",ans);
	break;
	}
	getch();
}

int add()
{
	int n1,n2,ans;

	printf("\nEnetr Your Number : ");
	scanf("%d",&n1);
	printf("\nEnetr Your Second Number : ");
	scanf("%d",&n2);

	ans=n1+n2;
	return ans;
}
int sub()
{
	int n1,n2,ans;
	printf("\nEnter Two numbers :");
	scanf("%d%d",&n1,&n2);
	ans=n1-n2;
	return ans;
}
int div()
{
	int n1,n2,ans;
	printf("\nEnter two numbers :");
	scanf("%d%d",&n1,&n2);
	ans=n1/n2;
	return ans;
}
int mul()
{
	int n1,n2,ans;
	printf("\nEnter two numbers :");
	scanf("%d%d",&n1,&n2);
	ans=n1*n2;
	return ans;
}