#include "game.h"

void	gain_calcul(t_hero *info_hero, int *tab, t_monster_enum monster)
{
	if (tab[0] == 0)// if loose
	{
		//info_hero->gold+= 1;
		info_hero->hp = info_hero->hp -1;
	}
	else if (tab[1] >= 1) // if win
	{
		if (monster == BEE || monster == WHALE)
		{
			info_hero->gold += 1;
			info_hero->xp += 1;
		}
		else if (monster == CACTUS)
		{
			info_hero->gold += 3;
			info_hero->xp += 3;
		}
		else if (monster == SANTORE)
		{
			info_hero->gold += 4;
			info_hero->xp += 5;
		}
		else if (monster == SPIDER)
		{
			info_hero->gold += 2;
			info_hero->xp += 2;
		}
	}
}

int	fight_calcul(t_hero *info_hero, t_monster *info_monster, int *tab)
{
	int	nbr_round_for_win = 0;
	int	nbr_round_for_loose = 0;
	int	nbr_of_round = 0;

	nbr_round_for_win = (info_monster->hp + info_monster->armor) - info_hero->attack;
	nbr_round_for_loose = (info_hero->hp + info_hero->armor) - info_monster->attack;
	nbr_of_round = nbr_round_for_loose - nbr_round_for_win;
	if (nbr_of_round <= 0)
		tab[0] = 0;
	else
		tab[0] = 1;
	tab[1] = nbr_of_round;
	if (nbr_of_round <= 0)
		return (1);
	else
		return (0);
}

int	fight_region(t_hero *info_hero, t_monster *info_monster,t_item *item,
		t_shop *shop, int region)
{
	t_monster_enum monster;
	int	tab[3];
	char	*line;
	int		boucle = 1;
	int		loose;
	int		i = 0;

	//printf("\033[H\033[J");

	while (boucle > 0)
	{
		boucle--;
		monster = monster_choice_region(info_monster, region);
  	    loose = fight_calcul(info_hero, info_monster, tab);
  	    print_monster(monster, tab, info_hero);
  	    gain_calcul(info_hero, tab, monster);
		printf("\033[H\033[J"); //clear screan

		if (region == DONJON)
			info_hero->donjon_kill += 1;
		else if (region == DESERT)
			info_hero->desert_kill += 1;
		else if (region == OCEAN)
			info_hero->ocean_kill += 1;
		if (boucle == 0 || loose == 1)
		{
  	    	if (tab[0] == 0) // loose one fight
  	    	{
				print_stats(info_hero);
  	    		if (info_hero->hp <= 0)
					return (0);
					//break;
				i = choice_loose_screen();
  	    	}
  	    	else
			{
				//info_monster->hp = info_monster->hp -1;
				if (1 + 1 == 3)//pas use
					change_shop(item, shop, info_hero);// pas use
				print_stats(info_hero);
				i = choice_win_screen();
			}

			if (i == 0)	
	 		   	boucle = 1;
	 	    else if (i == 1)
				break;
		    else if (atoi(line) != 0 || strcmp(line, "0") == 0)
				boucle = (atoi(line));
		}
	}
	return (1);
}

