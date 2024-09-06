#include "item.h"
#include "game.h"

void	init_wood_shield(t_item *item)
{
	item->armor->wood_shield = malloc(sizeof(t_potion_heal));
	item->armor->wood_shield->stats = malloc(sizeof(t_item_stats));

	item->armor->wood_shield->stats->healing = 0;	
	item->armor->wood_shield->stats->hp = 0;	
	item->armor->wood_shield->stats->attack = 0;	
	item->armor->wood_shield->stats->armor = 1;	
	item->armor->wood_shield->id = 2;

	const char *logo =
    "|`-._/\\_.-`|\n"
    "|    ||    |\n"
    "|____||____|\n"
    "|    ||    |\n"
    "\\    ||    /\n"
    " \\   ||   / \n"
    "  \\  ||  /	 \n"
    "   '.||.'	 \n";

	item->armor->wood_shield->logo = malloc(strlen(logo) + 1);
	strcpy(item->armor->wood_shield->logo, logo);
}

void	init_armor(t_item *item)
{
	item->armor = malloc(sizeof(t_heal));
	init_wood_shield(item);
}

