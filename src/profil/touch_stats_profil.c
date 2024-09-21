#include "game.h"

void	delet_stats(t_hero *hero, int i)
{
	if (i == 1)
	{
		if (hero->inventory->item_1->consummable == 0)
		{
			if (hero->inventory->item_1->healing > 0)
				hero->hp -= hero->inventory->item_1->healing;
			if (hero->inventory->item_1->hp > 0)
				hero->hp_max -= hero->inventory->item_1->hp;
			if (hero->inventory->item_1->attack > 0)
				hero->attack -= hero->inventory->item_1->attack;
			if (hero->inventory->item_1->armor > 0)
				hero->armor -= hero->inventory->item_1->armor;
		}
	}
	else if (i == 2)
	{
		if (hero->inventory->item_2->consummable == 0)
		{
			if (hero->inventory->item_2->healing > 0)
				hero->hp -= hero->inventory->item_2->healing;
			if (hero->inventory->item_2->hp > 0)
				hero->hp_max -= hero->inventory->item_2->hp;
			if (hero->inventory->item_2->attack > 0)
				hero->attack -= hero->inventory->item_2->attack;
			if (hero->inventory->item_2->armor > 0)
				hero->armor -= hero->inventory->item_2->armor;
		}
	}
	else if (i == 3)
	{
		if (hero->inventory->item_3->consummable == 0)
		{
			if (hero->inventory->item_3->healing > 0)
				hero->hp -= hero->inventory->item_3->healing;
			if (hero->inventory->item_3->hp > 0)
				hero->hp_max -= hero->inventory->item_3->hp;
			if (hero->inventory->item_3->attack > 0)
				hero->attack -= hero->inventory->item_3->attack;
			if (hero->inventory->item_3->armor > 0)
				hero->armor -= hero->inventory->item_3->armor;
		}
	}
	else if (i == 4)
	{
		if (hero->inventory->item_4->consummable == 0)
		{
			if (hero->inventory->item_4->healing > 0)
				hero->hp -= hero->inventory->item_4->healing;
			if (hero->inventory->item_4->hp > 0)
				hero->hp_max -= hero->inventory->item_4->hp;
			if (hero->inventory->item_4->attack > 0)
				hero->attack -= hero->inventory->item_4->attack;
			if (hero->inventory->item_4->armor > 0)
				hero->armor -= hero->inventory->item_4->armor;
		}
	}
	else if (i == 5)
	{
		if (hero->inventory->item_5->consummable == 0)
		{
			if (hero->inventory->item_5->healing > 0)
				hero->hp -= hero->inventory->item_5->healing;
			if (hero->inventory->item_5->hp > 0)
				hero->hp_max -= hero->inventory->item_5->hp;
			if (hero->inventory->item_5->attack > 0)
				hero->attack -= hero->inventory->item_5->attack;
			if (hero->inventory->item_5->armor > 0)
				hero->armor -= hero->inventory->item_5->armor;
		}
	}
}

void	copy_stats(t_hero *hero, t_item_stats *stats)
{
	if (hero->hp != hero->hp_max)
		hero->hp += stats->healing;// si le nombre de pv max n'est pas attein
	hero->hp_max += stats->hp;
	hero->attack += stats->attack;
	hero->armor += stats->armor;
	//	profil_stats(hero);
}
