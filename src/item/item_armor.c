#include "item.h"
#include "game.h"

void	init_wood_shield(t_item *item)
{
	item->armor->wood_shield->stats->heal = 0;	
	item->armor->wood_shield->stats->hp = 0;	
	item->armor->wood_shield->stats->attack = 0;	
	item->armor->wood_shield->stats->armor = 1;	

	item->amor->wood_shield->stats->logo = {
    "|`-._/\\_.-`|\n"
    "|    ||    |\n"
    "|____||____|\n"
    "|    ||    |\n"
    "\\    ||    /\n"
    " \\   ||   / \n"
    "  \\  ||  /	 \n"
    "   '.||.'	 \n"
}

void	init_armor(t_item *item)
{
	init_wood_shield(item);
}

