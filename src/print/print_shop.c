#include "game.h"

void	print_shop(t_shop *shop)
{
	printf("shop->item_1%d\n", shop->item_1->healing);
		printf("%s : %d, %d, %d, %d, \n%s\n",
			   shop->item_1->name,
		       shop->item_1->healing,
		       shop->item_1->hp,
		       shop->item_1->attack,
		       shop->item_1->armor,
		       shop->logo_item_1);
		printf("%s : %d, %d, %d, %d, \n%s\n",
			   shop->item_2->name,
		       shop->item_2->healing,
		       shop->item_2->hp,
		       shop->item_2->attack,
		       shop->item_2->armor,
		       shop->logo_item_2);
		printf("%s : %d, %d, %d, %d,\n%s\n",
			   shop->item_3->name,
		       shop->item_3->healing,
		       shop->item_3->hp,
		       shop->item_3->attack,
		       shop->item_3->armor,
		       shop->logo_item_3);
		printf("%s : %d, %d, %d, %d, \n%s\n",
			   shop->item_4->name,
		       shop->item_4->healing,
		       shop->item_4->hp,
		       shop->item_4->attack,
		       shop->item_4->armor,
		       shop->logo_item_4);
}

//    char *logo_item_4 = "|`-._/\\_.-`|\n"
//                        "					|    ||    |\n"
//                        "					|____||____|\n"
//                        "					|    ||    |\n"
//                        "			   	         \\    ||    /\n"
//                        "			 		        \\   ||   / \n"
//                        "			  	               \\  ||  /  \n"
//                        "			                       '.||.'";
//
//
//    printf(
//        "                 +------------------------------------------------+\n"
//        "                /                                                /|\n"
//        "               /      O .                                      /  |\n"
//        "              /    o .    .           %s               /   |\n"
//        "             /     .+----+                              /    |\n"
//        "            /       |    | .                          /     |\n"
//        "           /        |    |                          /      |\n"
//        "          /         /      \\                      /       |\n"
//        "         /         /--------\\                    /        |\n"
//        "        /         /          \\                /         \n"
//        "       /         +___________+              /         \n"
//        "      /                                    /          \n"
//        "     +------------------------------------------------+\n"
//        "     |                                                |\n"
//        "     |                                                |\n"
//        "     |                                                |\n"
//        "     |                                                |\n"
//        "     |                                                |\n",
//        logo_item_4
//    );
//}
