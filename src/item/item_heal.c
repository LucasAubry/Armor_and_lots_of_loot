#include "item.h"
#include "game.h"

void	init_potion_heal(t_item *item)
{

	item->heal->potion_heal = malloc(sizeof(t_potion_heal));
	item->heal->potion_heal->stats = malloc(sizeof(t_item_stats));

	item->heal->potion_heal->stats->healing = 1;
	item->heal->potion_heal->stats->hp = 0;
	item->heal->potion_heal->stats->attack = 0;
	item->heal->potion_heal->stats->armor = 0;
	item->heal->potion_heal->stats->name = "heal potion";
	item->heal->potion_heal->stats->price = 1;
	item->heal->potion_heal->stats->number = 1;
	item->heal->potion_heal->id = 2;
	item->heal->potion_heal->stats->consummable = 1;

    const char *logo =
	"__________________________\n"
	"|\\ ____________________ /|\n"
	"| | _                _ | |\n"
	"| |(+)         O    (+)| |\n"
	"| | ~     o .    .   ~ | |\n"
	"| |      .+----+  .    | |\n"
	"| |       |    |       | |\n"
	"| |       |    |   .   | |\n"
	"| |      /      \\      | |\n"
	"| |     /--------\\     | |\n"
	"| |    /          \\    | |\n"
	"| |    +__________+    | |\n"
	"| |                    | |\n"
	"| |(+)              (+)| |\n"
	"| | ~                ~ | |\n"
	"|/ -------------------- \\|\n"
	" ------------------------ \n";

    item->heal->potion_heal->logo = malloc(strlen(logo) + 1);
    strcpy(item->heal->potion_heal->logo, logo);
}
	
void	init_heal_flower(t_item *item)
{
	item->heal->heal_flower = malloc(sizeof(t_heal_flower));
	item->heal->heal_flower->stats = malloc(sizeof(t_item_stats));

	item->heal->heal_flower->stats->healing = 1;
	item->heal->heal_flower->stats->hp = 1;
	item->heal->heal_flower->stats->attack = 0;
	item->heal->heal_flower->stats->armor = 0;
	item->heal->heal_flower->stats->name = "heal flower";
	item->heal->heal_flower->stats->price = 5;
	item->heal->heal_flower->stats->number = 1;
	item->heal->heal_flower->id = 5;
	item->heal->heal_flower->stats->consummable = 1;

    const char *logo =
	"__________________________\n"
	"|\\ ____________________ /|\n"
	"| | _                _ | |\n"
	"| |(+)              (+)| |\n"
	"| | ~                ~ | |\n"
	"| |        .--.        | |\n"
	"| |      .'_\\/_'.      | |\n"
	"| |      '. /\\ .'      | |\n"
	"| |        \"||\"        | |\n"
	"| |         || /\\      | |\n"
	"| |      /\\ ||//\\)     | |\n"
	"| |     (/\\\\||/        | |\n"
	"| |        \\||/        | |\n"
	"| |(+)              (+)| |\n"
	"| | ~                ~ | |\n"
	"|/ -------------------- \\|\n"
	" ------------------------ \n";

    item->heal->heal_flower->logo = malloc(strlen(logo) + 1);
    strcpy(item->heal->heal_flower->logo, logo);
}

void	init_heal(t_item *item)
{
	item->heal = malloc(sizeof(t_heal));
	init_potion_heal(item);
	init_heal_flower(item);
}
