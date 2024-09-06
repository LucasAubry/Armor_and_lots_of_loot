#include "item.h"
#include "game.h"

void	init_wood_sword(t_item *item)
{
	item->attack->wood_sword = malloc(sizeof(t_potion_heal));
	item->attack->wood_sword->stats = malloc(sizeof(t_item_stats));

	item->attack->wood_sword->stats->healing = 0;	
	item->attack->wood_sword->stats->hp = 0;	
	item->attack->wood_sword->stats->attack = 3;	
	item->attack->wood_sword->stats->armor = 0;	
	item->attack->wood_sword->stats->name = "wood sword";
	item->attack->wood_sword->id = 1;
	
	const char *logo =
	"   /\\\n"
	"   ||\n"
	"   ||\n"
	"   ||\n"
	"__/__\\__\n"
	"   ||\n"
	"   ||\n"
	"   ||\n"
	"   ()\n";

	item->attack->wood_sword->logo = malloc(strlen(logo) + 1);
	strcpy(item->attack->wood_sword->logo, logo);
}

void	init_attack(t_item *item)
{
	item->attack = malloc(sizeof(t_heal));
	init_wood_sword(item);
}
