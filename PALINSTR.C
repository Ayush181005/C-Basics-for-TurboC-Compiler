#include<stdio.h>
#include<conio.h>
void main()
{
	char word[10];
	int i,j,flag=1,len=0;
	clrscr();

	printf("\nEnter word :");
	gets(word);

	len = strlen(word);

	printf("\nName length : %d",len);

	for(i=0,j=(len-1);word[i]!='\0';i++,j--)
	{
		if(word[i]!=word[j])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nThe word %s is Palindrome.",word);
	}
	else
	{
		printf("\nThe word %s is not Palindrome.",word);
	}
	getch();
}