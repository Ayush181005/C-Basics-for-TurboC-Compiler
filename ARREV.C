#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	clrscr();
	printf("\nEnter any ten numbers :");
	for(i=1;i<=10;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=10;i>0;i--)
	{
	 printf("\n%d",a[i]);
	}
	getch();
}