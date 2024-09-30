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
			info_hero->gold += 2;
			info_hero->xp += 1;
		}
		else if (monster == CACTUS)
		{
			info_hero->gold += 4;
			info_hero->xp += 3;
		}
		else if (monster == SANTORE)
		{
			info_hero->gold += 4;
			info_hero->xp += 5;
		}
		else if (monster == SPIDER)
		{
			info_hero->gold += 3;
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

int *choice_region_monster(int region)
{
	int *tab = (int *)malloc(5 * sizeof(int));
	memset(tab, 0, 5 * sizeof(int));
//	if (region == )
//	{
//		tab[BEE] = 0;
//		tab[WHALE] = 0;
//		tab[CACTUS] = 0;
//		tab[SANTORE] = 0;
//		tab[SPIDER] = 0;
//	}
//	if (region == )
//	{
//		tab[BEE] = 0;
//		tab[WHALE] = 0;
//		tab[CACTUS] = 0;
//		tab[SANTORE] = 0;
//		tab[SPIDER] = 0;
//	}
	if (region == DESERT)
	{
		tab[BEE] = 2;
		tab[WHALE] = 0;
		tab[CACTUS] = 8;
		tab[SANTORE] = 0;
		tab[SPIDER] = 4;
	}
	if (region == DONJON)
	{
		tab[BEE] = 9;
		tab[WHALE] = 0;
		tab[CACTUS] = 0;
		tab[SANTORE] = 1;
		tab[SPIDER] = 3;
	}
	return (tab);
}

t_monster_enum randome_region(int region)
{
    int elements[] = {BEE, WHALE, CACTUS, SANTORE, SPIDER};
    int *poids = choice_region_monster(region);// modifier les choix en fonction de la region
    int taille = sizeof(elements) / sizeof(elements[0]);

	if (poids == NULL)
		return (BEE);

    int total_poids = 0;
    for (int i = 0; i < taille; i++) {
        total_poids += poids[i];
    }
	if (total_poids == 0)
	{
		free(poids);
		return (BEE);
	}
	t_monster_enum monster = choix_aleatoire_pondere(elements, poids, taille);
	free(poids);
	return (monster);
}

t_monster_enum	monster_choice_region(t_monster *info_monster, int region)
{
    t_monster_enum monster = randome_region(region);
	if (monster < BEE || monster > SPIDER)
		return (BEE);

    switch (monster)
	{
        case BEE:
            info_monster->hp = 3;
            info_monster->attack = 1;
            info_monster->armor = 0;
			break;
        case WHALE:
            info_monster->hp = 5;
            info_monster->attack = 1;
            info_monster->armor = 1;
            break;
		case CACTUS:
			info_monster->hp = 7;
			info_monster->attack = 1;
			info_monster->armor = 2;
            break;
        case SANTORE:
            info_monster->hp = 25;
            info_monster->attack = 4;
            info_monster->armor = 2;
            break;
		case SPIDER:
			info_monster->hp = 8;
			info_monster->attack = 3;
			info_monster->armor = 0;
			break;
    }
	return (monster);
}

void	fight_region(t_hero *info_hero, t_monster *info_monster,t_item *item,
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

		if (boucle == 0 || loose == 1)
		{
  	    	if (tab[0] == 0) // loose one fight
  	    	{
				print_stats(info_hero);
  	    		if (info_hero->hp <= 0)
  	    			break;
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
}

void	in_region(int position, int region, t_hero *hero, t_monster *monster,
		t_item *item, t_shop *shop)
{
	if (region == DONJON)
		position = background_tower(position);
	else if (region == DESERT)
		position = background_desert(position);
	if (position == 2)// metre 3 en vriable pour changer a chaque region
	{
		//coffre
		in_region(position, region, hero, monster, item, shop);
	}
	if (position == 7)// metre 8 en vriable pour changer a chaque region
	{
		fight_region(hero, monster, item, shop, region);
		in_region(position, region, hero, monster, item, shop);
		//fight
		//sortie
	}
	else if (position == 10 || position == 0)
		return;
	else
		in_region(position, region, hero, monster, item, shop);
}

int	select_region()
{
	int i = choice_region();
	if (i == 0)
		return (DONJON);
	else
		return (DESERT);
}

void	fight(t_hero *hero, t_monster *monster, t_item *item, t_shop *shop)
{
	int region = 0;

	if (choice_fight_button())
		return ;
	region = select_region();//a faire
	in_region(0, region, hero, monster, item, shop);
}
