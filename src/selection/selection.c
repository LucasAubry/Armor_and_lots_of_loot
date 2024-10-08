#include "game.h"

int	arrow_selection(char **frames, int nombre_de_frames)
{
	int	ch;
	int	modif = 0;
	int	arrow = 0;
	nombre_de_frames--;

	initscr();
	raw();
	clear();
	keypad(stdscr, TRUE);
	refresh();

	mvprintw(0, 0, "%s", frames[arrow]);
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
				arrow +=1;
				if (arrow > nombre_de_frames) arrow = 0;
				modif = 1;
				break;
			case '\n': // touche entrer
				endwin();
				return (arrow);
			default:
				modif = 0;
				break;
		}
		if (modif == 1)
		{
			mvprintw(0, 0, "%s", frames[arrow]);
			modif = 0;
		}
		refresh();	
	}
}

int	selection(int num, ...)//fonnction pour selectionner avec les fleches plutot qu'en tapan les choses
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
	i = arrow_selection(frames, num);
	free(frames);
	return (i);
}


/*---------------selection complexe------------*/

int arrow_selection_var(char **frames, int nombre_de_frames, int var1, int var2)
{
    int ch;
    int modif = 0;
    int arrow = 0;
    nombre_de_frames--;

    char buffer[4096];

    initscr();
    raw();
    clear();
    keypad(stdscr, TRUE);
    refresh();

	if (arrow == 2)
		snprintf(buffer, sizeof(buffer), frames[arrow], var2);
	else
		snprintf(buffer, sizeof(buffer), frames[arrow], var1);
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
                return arrow;
            default:
                modif = 0;
                break;
        }
        if (modif == 1)
        {
            clear();
			if (arrow == 2)
				snprintf(buffer, sizeof(buffer), frames[arrow], var2);
			else
				snprintf(buffer, sizeof(buffer), frames[arrow], var1);
            mvprintw(0, 0, "%s", buffer);
            modif = 0;
        }
        refresh();
    }
}

int selection_var(int num, int var1, int var2, ...)
{
    va_list args;
    int i = 0;
    char **frames = malloc(num * sizeof(char *));

    va_start(args, var2);  // var2 est le dernier argument fixe
    while (i < num)
    {
        frames[i] = va_arg(args, char *);
        i++;
    }
    va_end(args);
    i = arrow_selection_var(frames, num, var1, var2);
    free(frames);
    return i;
}


/////////book///////////

int arrow_selection_book(char **frames, int nombre_de_frames, int var1)
{
    int ch;
    int modif = 0;
    int arrow = 0;
    nombre_de_frames--;

    char buffer[4096];

    initscr();
    raw();
    clear();
    keypad(stdscr, TRUE);
    refresh();

	snprintf(buffer, sizeof(buffer), frames[arrow], var1);
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
                return arrow;
            default:
                modif = 0;
                break;
        }
        if (modif == 1)
        {
            clear();
			snprintf(buffer, sizeof(buffer), frames[arrow], var1);
            mvprintw(0, 0, "%s", buffer);
            modif = 0;
        }
        refresh();
    }
}

int selection_book(int num, int var1, ...)
{
    va_list args;
    int i = 0;
    char **frames = malloc(num * sizeof(char *));

    va_start(args, var1);  // var2 est le dernier argument fixe
    while (i < num)
    {
        frames[i] = va_arg(args, char *);
        i++;
    }
    va_end(args);
    i = arrow_selection_book(frames, num, var1);
    free(frames);
    return i;
}















//int	arrow_selection_stats(char **frames, int nombre_de_frames, t_hero *hero)
//{
//	int	ch;
//	int	modif = 0;
//	int	arrow = 0;
//	nombre_de_frames--;
//
//	initscr();
//	raw();
//	clear();
//	keypad(stdscr, TRUE);
//	refresh();
//
//	mvprintw(0, 0, "%s", frames[arrow]);
//	while (1)
//	{
//		ch = getch();
//		switch (ch) {
//			case KEY_UP:
//				arrow -= 1;
//				if (arrow < 0) arrow = nombre_de_frames;
//				modif = 1;
//				break;
//			case KEY_DOWN:
//				arrow += 1;
//				if (arrow > nombre_de_frames) arrow = 0;
//				modif = 1;
//				break;
//			case KEY_LEFT:
//				arrow -= 1;
//				if (arrow < 0) arrow = nombre_de_frames;
//				modif = 1;
//				break;
//			case KEY_RIGHT:
//				arrow +=1;
//				if (arrow > nombre_de_frames) arrow = 0;
//				modif = 1;
//				break;
//			case '\n': // touche entrer
//				endwin();
//				return (arrow);
//			default:
//				modif = 0;
//				break;
//		}
//		if (modif == 1)
//		{
//			mvprintw(0, 0, "%s", frames[arrow]);
//			modif = 0;
//		}
//		refresh();	
//	}
//}
//
//int	selection_stats(t_hero *hero, int num, ...)//fonnction pour selectionner avec les fleches plutot qu'en tapan les choses
//{
//	va_list args;
//	int		i = 0;
//	char **frames = malloc(num * sizeof(char *));
//
//	va_start(args, num);
//	while (i < num)
//	{
//		frames[i] = va_arg(args, char *);
//		i++;
//	}
//	va_end(args);
//	i = arrow_selection_stats(frames, num, hero);
//	free(frames);
//	return (i);
//}
//

