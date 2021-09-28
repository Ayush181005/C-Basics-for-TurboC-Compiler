#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char s[20];
	clrscr();
	printf("\nEnter any line :");
	gets(s);
	printf("\nLine is : %s\n\n",s);
	//puts(s);
	for(i=0;s[i]!='\0';i++)//!= is not equal to and '\0' is null value
	{
		printf("\n%c => %d",s[i],s[i]);
	}
	getch();
}
/*
s => 0   1   2   3   4   5   6   7   8   9
     R   o   y   a   l  '\0'
*/