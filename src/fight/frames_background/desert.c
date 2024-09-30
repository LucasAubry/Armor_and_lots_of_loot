#include "game.h"

int	background_desert(int position)
{
		char *desert_f1 =
    "           ,,                               .-.\n"
    "          || |                               ) )\n"
    "          || |   ,                          '-'\n"
    "          || |  | |\n"
    "          || '--' |\n"
    "    ,,    || .----'\n"
    "   || |   || |\n"
    "   |  '---'| |\n"
    "   '------.| |                                  _____\n"
    "   ((_))  || |      (  _                       / /|\\ \\\n"
    "   (o o)  || |      ))(\",                    | | | | |\n"
    "____\\_/___||_|_____((__^_))____________________\\_\\|/_/__ldb\n";
	
	int i = selection_position(position, 1, desert_f1);
	return (i);
}
