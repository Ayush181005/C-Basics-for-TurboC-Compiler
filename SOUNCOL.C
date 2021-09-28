#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
	clrscr();
	int i;
	textbackground(YELLOW);
	textcolor(RED);
	for(i=0;i<=30000;i++){
		cprintf("\nFrequency = %d Hz");
		sound(i);
		delay(10);
	}
	getch();
}