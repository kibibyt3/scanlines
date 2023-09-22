#include <unistd.h>
#include <ncurses.h>

int main(void){
	initscr();
	halfdelay(1);
	start_color();
	init_color(9, 200, 200, 200);
	init_pair(1, 9, COLOR_BLACK);
	attron(COLOR_PAIR(1));

	int phase = 0;

	int acsch;

	while (true){
		switch (phase % 4){
		case 0:
			acsch = ACS_S1;
			break;
		case 1:
			acsch = ACS_S3;
			break;
		case 2:
			acsch = ACS_S7;
			break;
		case 3:
			acsch = ACS_S9;
			break;
		}
	
		phase++;
	
		clear();
		for (int line = 0; line < LINES; line++){
			for (int column = 0; column < COLS; column++){
				mvaddch(line, column, acsch);
			}
		}
		mvgetch(0, 0);
		refresh();
	}
}
