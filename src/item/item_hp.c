#include "game.h"
#include "item.h"

void	init_heart(t_item *item)
{
	item->hp->heart->stats->heal = 0;
	item->hp->heart->stats->hp = 1;
	item->hp->heart->stats->attack = 0;
	item->hp->heart->stats->armor = 0;

	item->hp->heart->stats->logo = {
	"   ____  ____   \n"
	"  /    \\/    \\  \n"
	" /.  .    . \\  \n"
	" \\   .      /  \n"
	"  \\     .  /   \n"
	"   \\.  .  /    \n"
	"    \\.   /     \n"
	"     \\  /      \n"
	"      \\/       \n";
}

void	init_hp(t_item *item)
{
	init_heart(item);
}
