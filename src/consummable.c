#include "game.h"

int	check_consummable(t_item_stats *item, t_hero *hero)//verif si on peut use le consomable
{
	int	exit = 0;
		if (item->healing > 0)
		{
			if ((strcmp(item->name, "heal flower")) && (hero->hp >= hero->hp_max || item->healing + hero->hp > hero->hp_max))
			{
				printf("\n\nyou are full life\n\n");
				sleep(2);
				exit += 1;
			}
			else
			{
				copy_stats(hero, item);
				item->number = 0;
				item->name = NULL;
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
