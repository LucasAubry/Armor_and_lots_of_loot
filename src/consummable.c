#include "game.h"

int	check_consummable(t_item_stats *item, t_hero *hero)
{
	int	exit = 0;
		if (item->healing > 0)
		{
			if (hero->hp == hero->hp_max)
			{
				printf("\n\nyou are full life\n\n");
				exit += 1;
			}
		}
//		else if (item->stats->hp > 0)
//		{
//			//ajouter une verif de condition
//			exit += 1;
//		}
//		else if (item->stats->armor > 0)
//		{
//			//ajouter une verif de condition
//			exit += 1;
//		}
//		else if (item->stars->attack > 0)
//		{
//			//ajouter une verif de condition
//			exit += 1;
//		}
		if (exit >= 1)
			return (0);
		return (1);
}
