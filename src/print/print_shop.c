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


void	print_bannier_shop(void)
{
	printf(
"	.                          \n"
"        ('                            \n"
"        '|                            \n"
"        |'                            \n"
"       [::]                           \n"
"       [::]   _......_                \n"
"       [::].-'      _.-`.             \n"
"       [:.'    .-. '-._.-`.           \n"
"       [/ /\\   |  \\        `-..       \n"
"       / / |   `-.'      .-.   `-.    \n"
"      /  `-'            (   `.    `.  \n"
"     |           /\\      `-._/      \\ \n"
"     '    .'\\   /  `.           _.-'| \n"
"    /    /  /   \\_.-'        _.':;:/  \n"
"  .'     \\_/             _.-':;_.-'   \n"
" /   .-.             _.-' \\;.-'       \n"
"/   (   \\       _..-____  |           \n"
"\\    `._/  _..-'   |SHOP| |           \n"
" \\         /        .--.  |			\n"
" `-.....-'/  _ _  .'    '.|           \n"
"          | |_|_| |      | \\  (o) \n"
"     (o)  | |_|_| |      | | (\\'/)    \n"
"    (\\'/)/  ''''' |     o|  \\;:;      \n"
"     :;  |        |      |  |/)       \n"
"      ;: `-.._    /__..--'\\.' ;:     \n"
"          :;  `--' :;   :;            \n"
"                                      \n");
}

void	print_shop(t_shop *shop)
{
  		printf("\033[H\033[J");
		printf("       %-30s %s\n", shop->item_1->name, shop->item_2->name);
		print_side_by_side(shop->logo_item_1, shop->logo_item_2);
		printf("heal   : %d                      heal   : %d\n"
			   "hp     : %d                      hp     : %d\n"
			   "attack : %d                      attack : %d\n"
			   "armor  : %d                      armor  : %d\n",
		       shop->item_1->healing,
		       shop->item_1->hp,
		       shop->item_1->attack,
		       shop->item_1->armor,
		       shop->item_2->healing,
		       shop->item_2->hp,
		       shop->item_2->attack,
		       shop->item_2->armor);
		printf("\n\n\n\n\n");	
		printf("       %-30s %s\n", shop->item_3->name, shop->item_4->name);
		print_side_by_side(shop->logo_item_3, shop->logo_item_4);
		printf("heal   : %d                      heal   : %d\n"
			   "hp     : %d                      hp     : %d\n"
			   "attack : %d                      attack : %d\n"
			   "armor  : %d                      armor  : %d\n",
		       shop->item_3->healing,
		       shop->item_3->hp,
		       shop->item_3->attack,
		       shop->item_3->armor,
		       shop->item_4->healing,
		       shop->item_4->hp,
		       shop->item_4->attack,
		       shop->item_4->armor);
}
