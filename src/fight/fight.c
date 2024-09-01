#include "game.h"

void	fight_calcul(t_hero *info_hero, t_monster *info_monster, int *tab)
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
}

void	reset_stats(t_hero *info_hero, t_monster *info_monster)
{
	info_hero->hp = 10;
	info_hero->gold = 0;
	info_hero->attack = 1;
	info_hero->armor = 0;

	info_monster->hp = 10;
	info_monster->attack = 1;
	info_monster->armor = 0;
}

int	fight(t_hero *info_hero, t_monster *info_monster)
{
	t_monster_enum monster;
	int	boul = 0;
	int	tab[3];
	printf("put stop for stop the fight");
	while (1)// ou que stop et presser
	{
		if (boul == 0)
		{
			monster = monster_choice(info_monster);
			boul = 1;
		}
		//annimation de combat
   		//print_monster(monster);
		fight_calcul(info_hero, info_monster, tab);
		if (tab[0] == 0)
		{
			print_monster(monster, tab[1]);
			//fight_loose_animation(tab[1], info_hero, info_monster, monster);
			return (0);
		}
		else
			print_monster(monster, tab[1]);
			//fight_win_animation(tab[1], info_hero, info_monster, monster);
	}
	//loose = return (0);
	//win / stop = return (1);
}
