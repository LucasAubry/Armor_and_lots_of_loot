#include "game.h"

void	print_profil(t_hero *hero)
{
	printf(
		"           	                                    \n"	
		"|=================================================|\n"
		"|               INVENTORY                         |\n"
		"|=================================================|\n"
		"| ID   | Objects            | Quantity | Equipped |\n"
		"|=================================================|\n"
		"| 001  | %-18s |    %d     |    %s    |           \n"
		"|-------------------------------------------------|\n"
		"| 002  | %-18s |    %d     |    %s    |           \n"
		"|-------------------------------------------------|\n"
		"| 003  | %-18s |    %d     |    %s    |           \n"
		"|-------------------------------------------------|\n"
		"| 004  | %-18s |    %d     |    %s    |           \n"
		"|-------------------------------------------------|\n"
		"| 005  | %-18s |    %d     |    %s    |           \n"
		"==================================================|\n",
	hero->inventory->item_1->name, hero->inventory->item_1->number, hero->inventory->item_1_equip,
	hero->inventory->item_2->name, hero->inventory->item_2->number, hero->inventory->item_2_equip,
	hero->inventory->item_3->name, hero->inventory->item_3->number,	hero->inventory->item_3_equip,
	hero->inventory->item_4->name, hero->inventory->item_4->number, hero->inventory->item_4_equip,
	hero->inventory->item_5->name, hero->inventory->item_5->number, hero->inventory->item_5_equip);
}
