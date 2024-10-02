#include "game.h"

void	init_inventory(t_inventory *inventory)
{
	inventory->item_1 = malloc(sizeof(t_item_stats));
    inventory->item_2 = malloc(sizeof(t_item_stats));
    inventory->item_3 = malloc(sizeof(t_item_stats));
    inventory->item_4 = malloc(sizeof(t_item_stats));
	inventory->item_5 = malloc(sizeof(t_item_stats));
	
	inventory->item_1->name = NULL;
	inventory->item_2->name = NULL;
	inventory->item_3->name = NULL;
	inventory->item_4->name = NULL;
	inventory->item_5->name = NULL;

	inventory->item_1_equip = "❌";
	inventory->item_2_equip = "❌";
	inventory->item_3_equip = "❌";
	inventory->item_4_equip = "❌";
	inventory->item_5_equip = "❌";

	inventory->item_1->number = 0;
	inventory->item_2->number = 0;
	inventory->item_3->number = 0;
	inventory->item_4->number = 0;
	inventory->item_5->number = 0;

	inventory->item_1->consummable = 0;
	inventory->item_2->consummable = 0;
	inventory->item_3->consummable = 0;
	inventory->item_4->consummable = 0;
	inventory->item_5->consummable = 0;

	inventory->item_1->logo = NULL;
	inventory->item_2->logo = NULL;
	inventory->item_3->logo = NULL;
	inventory->item_4->logo = NULL;
	inventory->item_5->logo = NULL;
	//init le reste de item comme sur init_shop
}

void	init_hero(t_hero *info_hero)
{
	info_hero->chest[0] = 0;//peut poser problemme avec le itn * dans le .h
	info_hero->chest[1] = 0;
	info_hero->chest[2] = 0;
	info_hero->xp = 0;
	info_hero->hp = 5;
	info_hero->hp_max = 5;
	info_hero->gold = 1;
	info_hero->attack = 1;
	info_hero->armor = 0;
	info_hero->donjon_kill = 0;
	info_hero->desert_kill = 0;
	info_hero->ocean_kill = 0;


	info_hero->inventory = malloc(sizeof(t_inventory));
	init_inventory(info_hero->inventory);

	//init le rest des item
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
	info_monster->xp = 0;
	info_monster->hp = 5;
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
