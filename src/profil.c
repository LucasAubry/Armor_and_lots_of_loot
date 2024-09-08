#include "game.h"

void	profil_stats(t_hero *hero)
{
	char *line;
	printf("\033[H\033[J");
	print_stats(hero);
	print_profil(hero);
	line = readline("");
}
