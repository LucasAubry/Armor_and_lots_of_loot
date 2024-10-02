#include "game.h"

void	loot_chest(t_hero *hero, int region, int i)
{
	if (region == DONJON)
	{
		if (i == 0 || i == 2 || i == 4)
			hero->gold += 1;
		else if (i == 1)
		{
			hero->hp_max += 1;
			hero->hp += 1;
		}
		else
			return ;
	}
	else if (region == DESERT)// faire un chest differant
	{
		if (i == 0 || i == 2 || i == 4)
			hero->gold += 1;
		else if (i == 1)
		{
			hero->hp_max += 1;
			hero->hp += 1;
		}
		else
			return ;

	}
	else if (region == OCEAN)// faire un chest differant
	{

		if (i == 0 || i == 2 || i == 4)
			hero->gold += 1;
		else if (i == 1)
		{
			hero->hp_max += 1;
			hero->hp += 1;
		}
		else
			return ;
	}
}

int	in_chest(char **frames, int num_frames)
{
	int	ch;
	int	arrow = 0;
	int	delay = 500;//delais entre les frames

	initscr();
	raw();
	clear();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);// permet a getch de ne pas bloquer
	refresh();

	while (1)
	{
		clear();
		mvprintw(0, 0, "%s", frames[arrow]);
		refresh();

		ch = getch();
		if (ch == '\n')
		{
			mvprintw(0, 0, "%s", frames[arrow]);
			sleep(1);
			endwin();
			return arrow;
		}
		// passer a la frame suivante
		arrow = (arrow + 1) % num_frames;
		usleep(delay * 400);
	}
}
	
int	selection_chest(int num, ...)
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
	i = in_chest(frames, num);
	free(frames);
	return (i);
}

void	open_chest(int region, t_hero *hero)
{
	int	i = 0;

	if (region == DONJON && hero->chest[0] == 0)
	{
		i = print_chest();
		loot_chest(hero, region, i);
		hero->chest[0] = 1;
	}
	else if (region == DESERT && hero->chest[1] == 0)
	{
		i = print_chest();
		loot_chest(hero, region, i);
		hero->chest[1] = 1;
	}
	else if (region == OCEAN && hero->chest[2] == 0)
	{
		i = print_chest();
		loot_chest(hero, region, i);
		hero->chest[2] = 1;
	}	

}

