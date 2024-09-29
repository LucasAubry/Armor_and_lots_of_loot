#include "game.h"

void print_side_by_side(const char *logo1, const char *logo2)
{
    const char *ptr1 = logo1;
    const char *ptr2 = logo2;
    char line1[256], line2[256];

    while (*ptr1 || *ptr2) {
        if (*ptr1) {
            sscanf(ptr1, "%[^\n]\n", line1);
            ptr1 += strlen(line1) + 1;
        } else {
            strcpy(line1, ""); 
        }
        if (*ptr2) {
            sscanf(ptr2, "%[^\n]\n", line2);
            ptr2 += strlen(line2) + 1;
        } else {
            strcpy(line2, "");
        }
        printf("%-30s %s\n", line1, line2);
    }
}

void	print_shop(t_shop *shop, t_hero *hero)
{
  		printf("\033[H\033[J");
		print_stats(hero);
	  //  printf("\n");
		printf("           [1]                            [2]\n");
		printf("           %d💰%28s%d💰\n", shop->item_1->price, "", shop->item_2->price);
		print_side_by_side(shop->logo_item_1, shop->logo_item_2);
		printf("heal   : %d  hp   : %d           heal   : %d   hp   : %d\n"
			   "attack : %d  armor   : %d        attack : %d   armor   : %d\n",
		       shop->item_1->healing,
		       shop->item_1->hp,
			   shop->item_2->healing,
			   shop->item_2->hp,
		       shop->item_1->attack,
		       shop->item_1->armor,
		       shop->item_2->attack,
		       shop->item_2->armor);
		printf("									[5] RESTOCK\n							  		     5💰\n");
		//printf("\n\n");	
		printf("            [3]                            [4]\n");
		printf("            %d💰%28s%d💰\n", shop->item_3->price, "", shop->item_4->price);
		print_side_by_side(shop->logo_item_3, shop->logo_item_4);
		printf("heal   : %d  hp   : %d           heal   : %d   hp   : %d\n"
			   "attack : %d  armor   : %d        attack : %d   armor   : %d\n",
		       shop->item_3->healing,
		       shop->item_3->hp,
			   shop->item_4->healing,
			   shop->item_4->hp,
		       shop->item_3->attack,
		       shop->item_3->armor,
		       shop->item_4->attack,
		       shop->item_4->armor);
}

void	print_shop_bought(t_shop *shop, t_item_stats *item, int num_item)
{
	(void)item;
	char *item_bought =
	"__________________________\n"
	"|\\ ____________________ /|\n"
	"| | _                _ | |\n"
	"| |(+)              (+)| |\n"
	"| | ~                ~ | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |                    | |\n"
	"| |(+)              (+)| |\n"
	"| | ~                ~ | |\n"
	"|/ -------------------- \\|\n"
	" ------------------------ \n";

	if (strcmp(shop->item_1->name, "Nothing") &&
			num_item == 1)
	{
		shop->logo_item_1 = item_bought;
		shop->item_1->name = "Nothing";
		shop->item_1->price = 0;
		shop->item_1->healing = 0;
		shop->item_1->hp = 0;
		shop->item_1->attack = 0;
		shop->item_1->armor = 0;
	}
	else if (strcmp(shop->item_2->name, "Nothing") &&
			num_item == 2)
	{
		shop->logo_item_2 = item_bought;
		shop->item_2->name = "Nothing";
		shop->item_2->price = 0;
		shop->item_2->healing = 0;
		shop->item_2->hp = 0;
		shop->item_2->attack = 0;
		shop->item_2->armor = 0;
	}
	else if (strcmp(shop->item_3->name, "Nothing") &&
			num_item == 3)
	{
		shop->logo_item_3 = item_bought;
		shop->item_3->name = "Nothing";
		shop->item_3->price = 0;
		shop->item_3->healing = 0;
		shop->item_3->hp = 0;
		shop->item_3->attack = 0;
		shop->item_3->armor = 0;
	}
	else if (strcmp(shop->item_4->name, "Nothing") &&
			num_item == 4)
	{
		shop->logo_item_4 = item_bought;
		shop->item_4->name = "Nothing";
		shop->item_4->price = 0;
		shop->item_4->healing = 0;
		shop->item_4->hp = 0;
		shop->item_4->attack = 0;
		shop->item_4->armor = 0;
	}
}
