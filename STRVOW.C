#include<stdio.h>
#include<conio.h>
void main()
{
	int i,vw_cnt=0;
	char s[20];
	clrscr();
	printf("\nEnter any line :");
	gets(s);
	printf("\nLine is : %s\n\n",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o'  || s[i]=='O' || s[i]=='u' || s[i]=='U')
		{
			vw_cnt++;
		}
	}
	printf("\nTotal vowels are %d.",vw_cnt);
	getch();
}