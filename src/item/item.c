#include "game.h"

void	init_items(t_item *item)
{
	init_heal(item);
	init_hp(item);
	init_attack(item);
	init_armor(item);
}
