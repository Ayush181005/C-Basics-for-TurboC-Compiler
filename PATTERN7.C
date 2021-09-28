#include<stdio.h>
#include<conio.h>
int i,j;
void main()
{
  clrscr();
  for(i=65;i<=90;i++)
  {
	for(j=65;j<=i;j++)
	{
		printf("%c",j);
	}
	printf("\n");
  }
  getch();
}