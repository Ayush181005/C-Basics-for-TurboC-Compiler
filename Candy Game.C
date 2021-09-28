/*

	Hello World

	x : 1 to 20
	y 1 to 25

	#   #       x - 2 y - 1
	#####       x + 2 y - 1
		    x - 2 y

		    102 % 3 = 0
		    99
		    0, 1, 2

		    % 20
		    + 1
		    1 to 20
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int cx = 10, cy = 1, bx = 10, by = 25, d;
	char ch;
	int score = 0, lives = 3;
	//textbackground(CYAN);
start:

	//printing score
	gotoxy(25, 1);
	textcolor(BROWN);
	cprintf("Score: %d", score);

	//printing lives
	gotoxy(25, 2);
	cprintf("Lives: %d", lives);

	// printing candy
	textcolor(RED);
	gotoxy(cx, cy);
	cprintf("*");
	// printing basket
	textcolor(YELLOW);
	gotoxy(bx - 2, by - 1);
	cprintf("#");
	gotoxy(bx + 2, by - 1);
	cprintf("#");
	gotoxy(bx - 2, by);
	cprintf("#####");

	if(kbhit())
	{
		ch = getch();

		switch(ch)
		{
			case 'a':
				bx--;
				break;

			case 'd':
				bx++;
				break;
			case 'x':
				exit(0);
		}
	}

	// catching the candy
	if(cy == 25)
	{
		d = cx - bx;
		if(-1 <= d && d <= 1)
		{
			score++;
		}

		else
		{
			lives--;

			if(lives == 0)
			{
				clrscr();
				textcolor(RED);
				gotoxy(34,13);
				cprintf("Game Over :(");
				textcolor(CYAN);
				gotoxy(34,14);
				cprintf("Score: %d",score);
				getch();
				exit(0);
			}


		}
		cx = (rand() % 20) + 1;
		cy = 1;
	}
	cy++;
	delay(100);
	goto start;
	getch();
	return(1);
}
