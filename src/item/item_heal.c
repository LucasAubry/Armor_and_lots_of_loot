#include "item.h"
#include "game.h"

void	init_potion_heal(item *item)
{
	item->heal->potion_heal->stats->heal = 1;
	item->heal->potion_heal->stats->hp = 0;
	item->heal->potion_heal->stats->attack = 0;
	item->heal->potion_heal->stats->armor = 0;

	item->heal->potion_heal->logo = {
	"	   O .		\n"
	"	o .    .	\n"
	"  .+----+		\n"
 	"	|	 | .	\n"
	"   |	 |		\n"
	"  /	 \\		\n"
	" /-------\\	\n"
	"/		   \\	\n"
	"+___________+	\n;
}

void	init_heal(t_item *item)
{
	init_potion_heal(item);
}
