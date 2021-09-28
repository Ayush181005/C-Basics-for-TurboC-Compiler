#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char s[10];
	clrscr();
	printf("\nEnter any character :");
		for(i=0;i<=5;i++)
		{
			scanf("%c",&s[i]);
		}
		printf("\n Using Loop :- ");

		for(i=0;i<=5;i++)
		{
			printf("%c",s[i]);
		}
		//Using other way
		printf("\nUsing %%s :-\nEnter other word :");//To print sign of %,do %%
		scanf("%s",s);
		printf("\nYou have entered : %s",s);
		getch();
}