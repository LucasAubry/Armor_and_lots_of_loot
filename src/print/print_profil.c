#include "game.h"

void	print_profil(t_hero *hero)
{
	char	*copy_item_1 = NULL;
	char	*copy_item_2 = NULL;
	char	*copy_item_3 = NULL;
	char	*copy_item_4 = NULL;
	char	*copy_item_5 = NULL;
	if (hero->inventory->item_1->name == NULL)
		copy_item_1 = "Nothing";
	else
		copy_item_1 = hero->inventory->item_1->name;
	if (hero->inventory->item_2->name == NULL)
		copy_item_2 = "Nothing";
	else
		copy_item_2 = hero->inventory->item_2->name;
	if (hero->inventory->item_3->name == NULL)
		copy_item_3 = "Nothing";
	else
		copy_item_3 = hero->inventory->item_3->name;
	if (hero->inventory->item_4->name == NULL)
		copy_item_4 = "Nothing";
	else
		copy_item_4 = hero->inventory->item_4->name;
	if (hero->inventory->item_5->name == NULL)
		copy_item_5 = "Nothing";
	else
		copy_item_5 = hero->inventory->item_5->name;

		char *inventory =
		"           	                                    \n"	
		"|=================================================|\n"
		"|                    INVENTORY                    |\n"
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
		"==================================================|\n";

		char buffer[1024];
	snprintf(buffer, sizeof(buffer), inventory,
    copy_item_1, hero->inventory->item_1->number, hero->inventory->item_1_equip,
    copy_item_2, hero->inventory->item_2->number, hero->inventory->item_2_equip,
    copy_item_3, hero->inventory->item_3->number, hero->inventory->item_3_equip,
    copy_item_4, hero->inventory->item_4->number, hero->inventory->item_4_equip,
    copy_item_5, hero->inventory->item_5->number, hero->inventory->item_5_equip);
	printf("%s", buffer);
}


