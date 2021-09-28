/*

	Candy:-
		*

	Basket:-
		#   #
		#####

		one place left  : -1
		on the center   :  0
		one place right : +1


	X --> 1 to 20  --> center = 10
	Y --> 1 to 25


	cx --> 5
	bx --> 10
	cx-bx --> -5

	cx = 15
	bx = 10
	cx-bx --> 5


	% modulo operator
		remainder

	32%10 --> 2
	46%10 --> 6

	number%10 --> 0 to 9

	number%20 --> 0 to 19

*/

#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int cx, cy;
	int bx, by;
	int d, score, lives, level;
	char ch;

restart:
	cx = 10;
	cy = 1;
	bx = 10;
	by = 25;
	score = 0;
	lives = 3;
	level = 1;

start:
	clrscr();

	// showing stats
	textcolor(BROWN);

	// - level
	gotoxy(25, 1);
	cprintf("Level: %d", level);

	// - score
	gotoxy(25, 2);
	cprintf("Score: %d", score);

	// - lives
	gotoxy(25, 3);
	cprintf("Lives: %d", lives);

	// darwing candy
	textcolor(RED);
	gotoxy(cx, cy);
	cprintf("*");

	// drawing basket
	textcolor(YELLOW);

	// - left-arm
	gotoxy(bx-2, by-1);
	cprintf("#");

	// - right-arm
	gotoxy(bx+2, by-1);
	cprintf("#");

	// - base
	gotoxy(bx-2, by);
	cprintf("#####");

	if(kbhit())
	{
		ch = getch();

		switch(ch)
		{
			case 'x': // exit the game
				exit(0);

			case 'a': // go left
				bx--;
				break;

			case 'd': // go right
				bx++;
				break;

			case 'p':
				getch();
				break;

			case 'r':
				goto restart;
		}
	}

	cy++;

	if(cy == 25)
	{
		d = cx-bx;

		if(d == -1 || d == 0 || d == 1)
		{
			score++;

			if(score == 10)
			{
				level++;
				score = 0;
			}
		}
		else
		{
			lives--;

			if(lives == 0)
			{
				clrscr();

				textcolor(RED);
				gotoxy(36, 13);
				cprintf("GAME OVER");

				textcolor(YELLOW);
				gotoxy(36, 14);
				cprintf("Level: %d", level);

				textcolor(YELLOW);
				gotoxy(36, 145);
				cprintf("Score: %d", score);

				getch();

				exit(0);
			}
		}

		cy = 1;
		cx = rand()%20 + 1;
	}

	delay(100);

	goto start;
}