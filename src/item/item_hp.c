#include "game.h"
#include "item.h"

void	init_heart(t_item *item)
{
	item->hp->low_heart = malloc(sizeof(t_low_heart));
	item->hp->low_heart->stats = malloc(sizeof(t_item_stats));

	item->hp->low_heart->stats->healing = 0;
	item->hp->low_heart->stats->hp = 1;
	item->hp->low_heart->stats->attack = 0;
	item->hp->low_heart->stats->armor = 0;

	const char *logo =
	"   ____  ____   \n"
	"  /    \\/    \\  \n"
	" /.  .    . \\  \n"
	" \\   .      /  \n"
	"  \\     .  /   \n"
	"   \\.  .  /    \n"
	"    \\.   /     \n"
	"     \\  /      \n"
	"      \\/       \n";

	item->hp->low_heart->logo = malloc(strlen(logo) + 1);
	strcpy(item->hp->low_heart->logo, logo);
}

void	init_hp(t_item *item)
{
	item->hp = malloc(sizeof(t_hp));
	init_heart(item);
}
