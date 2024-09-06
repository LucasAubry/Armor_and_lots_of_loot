#include "game.h"

void	init_hero(t_hero *info_hero)
{
	info_hero->xp = 1;
	info_hero->hp = 10;
	info_hero->gold = 0;
	info_hero->attack = 1;
	info_hero->armor = 0;
}

void	init_shop(t_shop *info_shop)
{
    info_shop->item_1 = malloc(sizeof(t_item_stats));
    info_shop->item_2 = malloc(sizeof(t_item_stats));
    info_shop->item_3 = malloc(sizeof(t_item_stats));
    info_shop->item_4 = malloc(sizeof(t_item_stats));

	info_shop->item_1->healing = 0;
	info_shop->item_1->hp = 0;
	info_shop->item_1->attack = 0;
	info_shop->item_1->armor = 0;
	info_shop->item_1->name = "Nothing";
	info_shop->logo_item_1 = NULL;

	info_shop->item_2->healing = 0;
	info_shop->item_2->hp = 0;
	info_shop->item_2->attack = 0;
	info_shop->item_2->armor = 0;
	info_shop->item_2->name = "Nothing";
	info_shop->logo_item_2 = NULL;

	info_shop->item_3->healing = 0;
	info_shop->item_3->hp = 0;
	info_shop->item_3->attack = 0;
	info_shop->item_3->armor = 0;
	info_shop->item_3->name = "Nothing";
	info_shop->logo_item_3 = NULL;

	info_shop->item_4->healing = 0;
	info_shop->item_4->hp = 0;
	info_shop->item_4->attack = 0;
	info_shop->item_4->armor = 0;
	info_shop->item_4->name = "Nothing";
	info_shop->logo_item_4 = NULL;
}

void	init_monster(t_monster *info_monster)
{
	info_monster->xp = 1;
	info_monster->hp = 10;
	info_monster->attack = 1;
	info_monster->armor = 0;
}

void	init_item(t_item *item)
{
	init_attack(item);
	init_armor(item);
	init_heal(item);
	init_hp(item);
}
