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
	item->attack->wood_sword->stats->price = 3;
	item->attack->wood_sword->stats->number = 1;
	item->attack->wood_sword->id = 0;
	item->attack->wood_sword->stats->consummable = 0;
	
	const char *logo =
	"__________________________\n"
	"|\\ ____________________ /|\n"
	"| | _                _ | |\n"
	"| |(+)              (+)| |\n"
	"| | ~                ~ | |\n"
	"| |         /\\         | |\n"
	"| |         ||         | |\n"
	"| |         ||         | |\n"
	"| |         ||         | |\n"
	"| |      __/__\\__      | |\n"
	"| |         ||         | |\n"
	"| |         ||         | |\n"
	"| |         ||         | |\n"
	"| |(+)      ()      (+)| |\n"
	"| | ~                ~ | |\n"
	"|/ -------------------- \\|\n"
	" ------------------------ \n";

	item->attack->wood_sword->logo = malloc(strlen(logo) + 1);
	strcpy(item->attack->wood_sword->logo, logo);
}

void	init_killer_book(t_item *item)
{
	item->attack->killer_book = malloc(sizeof(t_killer_book));
	item->attack->killer_book->stats = malloc(sizeof(t_item_stats));

	item->attack->killer_book->stats->healing = 0;
	item->attack->killer_book->stats->hp = 0;
	item->attack->killer_book->stats->attack = 10;
	item->attack->killer_book->stats->armor = 0;
	item->attack->killer_book->stats->name = "killer book";
	item->attack->killer_book->stats->price = 9;
	item->attack->killer_book->stats->number = 1;
	item->attack->killer_book->id = 4;
	item->attack->killer_book->stats->consummable = 0;
	
	const char *logo =
	"__________________________\n"
	"|\\ ____________________ /|\n"
	"| | _        .       _ | |\n"
	"| |(+)     '     .  (+)| |\n"
	"| | ~  ',  . .    ,  ~ | |\n"
	"| | ' . |\\\\\\ ////,|    | |\n"
	"| |   ' | \\\\\\V/// |    | |\n"
	"| |'    |  |===|  |.   | |\n"
	"| |     |  | k |  |  , | |\n"
	"| | '   |  | i |  |  . | |\n"
	"| |     |  | ; |  | ,  | |\n"
	"| | ,  .\\  | l | /   . | |\n"
	"| |   , , \\|===|/ ,    | |\n"
	"| |(+)  .  '---'  , (+)| |\n"
	"| | ~          ,     ~ | |\n"
	"|/ -------------------- \\|\n"
	" ------------------------ \n";	

	item->attack->killer_book->logo = malloc(strlen(logo) + 1);
	strcpy(item->attack->killer_book->logo, logo);
}


void	init_attack(t_item *item)
{
	item->attack = malloc(sizeof(t_attack));
	init_wood_sword(item);
	init_killer_book(item);
}
