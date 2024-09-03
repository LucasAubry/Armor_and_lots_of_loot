#include "item.h"
#include "game.h"

void	init_wood_sword(t_item *item)
{
	item->attack->wood_sword->stats->heal = 0;	
	item->attack->wood_sword->stats->hp = 0;	
	item->attack->wood_sword->stats->attack = 3;	
	item->attack->wood_sword->stats->armor = 0;	
	
	item->attack->wood_sword->logo =
	"   /\\\n"
	"   ||\n"
	"   ||\n"
	"   ||\n"
	"__/__\\__\n"
	"   ||\n"
	"   ||\n"
	"   ||\n"
	"   ()\n";
}

void	init_attack(t_item *item)
{
	init_wood_sword(item);
}
