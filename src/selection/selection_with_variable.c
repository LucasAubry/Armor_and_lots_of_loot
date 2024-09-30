#include "game.h"


int arrow_selection_logo(char **frames, int nombre_de_frames, char *logo)
{
	int	ch;
	int	modif = 0;
	int	arrow = 0;
	char buffer[1024];
	nombre_de_frames--;

	initscr();
	raw();
	clear();
	keypad(stdscr, TRUE);
	refresh();
	snprintf(buffer, sizeof(buffer), frames[arrow], logo);
	mvprintw(0, 0, "%s", buffer);
	
	while (1)
	{
		ch = getch();
		switch (ch) {
			case KEY_UP:
				arrow -= 1;
				if (arrow < 0) arrow = nombre_de_frames;
				modif = 1;
				break;
			case KEY_DOWN:
				arrow += 1;
				if (arrow > nombre_de_frames) arrow = 0;
				modif = 1;
				break;
			case KEY_LEFT:
				arrow -= 1;
				if (arrow < 0) arrow = nombre_de_frames;
				modif = 1;
				break;
			case KEY_RIGHT:
				arrow += 1;
				if (arrow > nombre_de_frames) arrow = 0;
				modif = 1;
				break;
			case '\n':
				endwin();
				return (arrow);
			default:
				modif = 0;
				break;
		}
		if (modif == 1)
		{
			clear();
			snprintf(buffer, sizeof(buffer), frames[arrow], logo);
			mvprintw(0, 0, "%s", buffer);
			modif = 0;
		}
		refresh();	
	}
}

int	selection_logo(char *logo, int num, ...)//fonnction pour selectionner avec les fleches plutot qu'en tapan les choses
{
	va_list args;
	int		i = 0;
	char **frames = malloc(num * sizeof(char *));

	va_start(args, num);
	while (i < num)
	{
		frames[i] = va_arg(args, char *);
		i++;
	}
	va_end(args);
	i = arrow_selection_logo(frames, num, logo);
	free(frames);
	return (i);
}
