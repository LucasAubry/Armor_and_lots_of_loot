#include "game.h"

int	choice_shop_button(void)
{
	char *yes_buttons =
		"	.     |'    .                       \n"
		"        ')                             \n"
		"         |' .                           \n"
		"                                      \n"
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
		" `-.....-'/  _ _  .' |  '.|           \n"
		"          | |_|_| |  |   | \\  (o) \n"
		"     (o)  | |_|_| |  |   | | /\\'/\\    \n"
		"    /\\'/\\/  ''''' | o    |  \\;:;      \n"
		"     :;  |        |  |   |  |/)       \n"
		"      ;: `-.._    /__|.--'\\.' ;:     \n"
		"          :;  `--' :;   :;            \n"
		"                                      \n"
		"      _____________  ____________     \n"
		"      |  * YES *  |  |    no    |     \n"
		"      -------------  ------------      \n";

	char *no_buttons =
		"	.                          \n"
		"        ('    .                       \n"
		"        '|      .                     \n"
		"     .  |'                            \n"
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
		"          | |_|_| |      | \\  (O) \n"
		"     (O)  | |_|_| |      | | (\\'/)    \n"
		"    (\\'/)/  ''''' |     o|  \\;:;      \n"
		"     :;  |        |      |  |/)       \n"
		"      ;: `-.._    /__..--'\\.' ;:     \n"
		"          :;  `--' :;   :;            \n"
		"                                      \n"
 		"      _____________  ____________     \n"
 		"      |    yes    |  |  * NO *  |     \n"
 		"      -------------  ------------     \n";

	int i = selection(2, yes_buttons, no_buttons);
	return (i);
}

char *find_item_logo(t_hero *hero, int item)
{
	if (item == 1)
		return (hero->inventory->item_1->logo);
	if (item == 2)
		return (hero->inventory->item_2->logo);
	if (item == 3)
		return (hero->inventory->item_3->logo);
	if (item == 4)
		return (hero->inventory->item_4->logo);
	if (item == 5)
		return (hero->inventory->item_5->logo);
	else
		return (NULL);
}

int	choice_equip(t_hero *hero, int item)
{
	char *logo = find_item_logo(hero, item);
	char *buttons_equip =
		"%s     \n"
		"  |____________\n"
	 	">>||   EQUIP   |\n"
		"  |-----------\n"
		"____________\n"
	 	"|   FUSION  |\n"
		"------------\n"
		"____________\n"
	 	"|    SELL   |\n"
		"------------\n"
		"____________\n"
	 	"|    EXIT   |\n"
		"------------\n";

	char *buttons_fusion =
		"%s     \n"
		"____________\n"
	 	"|   EQUIP   |\n"
		"-----------\n"
		"  |____________\n"
	 	">>||   FUSION  |\n"
		"  |------------\n"
		"____________\n"
	 	"|    SELL   |\n"
		"------------\n"
		"____________\n"
	 	"|    EXIT   |\n"
		"------------\n";

	char *buttons_sell =
		"%s     \n"
		"____________\n"
	 	"|   EQUIP   |\n"
		"-----------\n"
		"____________\n"
	 	"|   FUSION  |\n"
		"------------\n"
		"  |____________\n"
	 	">>||    SELL   |\n"
		"  |------------\n"
		"____________\n"
	 	"|    EXIT   |\n"
		"------------\n";

		char *buttons_exit =
		"%s     \n"
		"____________\n"
	 	"|   EQUIP   |\n"
		"-----------\n"
		"____________\n"
	 	"|   FUSION  |\n"
		"------------\n"
		"____________\n"
	 	"|    SELL   |\n"
		"------------\n"
		"  |____________\n"
	 	">>||   EXIT    |\n"
		"  |------------\n";

	int i = selection_logo(logo, 4, buttons_equip, buttons_fusion, buttons_sell, buttons_exit);
	return (i);
}

int	choice_buying(t_item_stats *item)
{
		char *button_yes =
		"%s\n"	
		"Are you sure you want to buy this item ?\n"	
		"      _____________  ____________     \n"
 		"      |  * YES *  |  |    no    |     \n"
 		"      -------------  ------------     \n";

		char *button_no =
		"%s\n"
		"Are you sure you want to buy this item ?\n"
		"      _____________  ____________     \n"
 		"      |    yes    |  |  * NO *  |     \n"
 		"      -------------  ------------     \n";

		int i = selection_logo(item->logo, 2, button_yes, button_no);
		return (i);
}

int	choice_fight_button(void)
{
	char *yes_buttons =
		"                                                                       \n"
		"                                                           			\n"	
		"                        {}                    {}            			\n"
		"                      ! II                    II !          			\n"
		"                     /- II                    II -\\\\      			\n"
		"                    //| ||                    ||-|\\\\        			\n"
		"       .--.        // | ||                    || | \\\\       .--.		\n"
		"      /-   \\     //| | ||                    || | |\\\\      /=   \\	    \n"
		"      \\=__ /    // | | ||                    || | | \\\\     \\-__ /	     \n"
		"       }  {  !  //| | | ||                    || | | |\\\\ !  }  {		\n"
		"      {____} I //|  | | ||                    || | | | \\\\I {____}      \n"
		"_!__!__|= |=/|/ |  | | ||                    ||  | |  |\\=|\\=|  |__!__!_\n"
		"_I__I__|  ||/|__|__|_|_||                    ||__|_|__|\\||\\||- |__I__I_\n"
		"-|--|--|- ||-|--|--|-|-||                    ||--|-|--|--|-||= |--|--|-\n"
		" |  |  |  || |  |  | | |||                   ||| | |  |  | ||  |  |  | \n"
		" |  |  |= || |  |  | | | ||                   || | |  |  | ||= |  |  | \n"
		" |  |  |- || |  |  | | | ||                   || | |  |  | ||= |  |  |	\n"
		" |  |  |- || |  |  | | | ||                   || | |  |  | ||- |  |  | \n"
		"_|__|__|  ||_|__|__|_|_|_||                   ||_|_|__|__|_||  |__|__|_\n"
		"-|--|--|= ||-|--|--|-|-|-||                   ||-|-|--|--|-||- |--|--|-\n"
		"-|--|--|| |  |  |  | | | ||                   || | |  | ||= |  |  |    \n"
		"~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~\n"
		"                     _____________  ____________\n"
		"                     |  * YES *  |  |    no    |\n"
		"                     -------------  ------------\n";

	char *no_buttons =
		"                                                                       \n"
		"                                 {} {}                                 \n"
		"                         !  !  ! II II !  !  !							\n"
		"                      !  I__I__I_II II_I__I__I  !						\n"
		"                      I_/|__|__|_|| ||_|__|__|\\_I						\n"
		"                   ! /|_/|  |  | || || |  |  |\\_|\\ !       			\n"
		"       .--.        I//|  |  |  | || || |  |  |  |\\\\I        .--.		\n"
		"      /-   \\    ! /|/ |  |  |  | || || |  |  |  | \\|\\ !    /=   \\	\n"
		"      \\=__ /    I//|  |  |  |  | || || |  |  |  |  |\\\\I    \\-__ /	\n"
		"       }  {  ! /|/ |  |  |  |  | || || |  |  |  |  | \\|\\ !  }  {		\n"
		"      {____} I//|  |  |  |  |  | || || |  |  |  |  |  |\\\\I {____}      \n"
		"_!__!__|= |=/|/ |  |  |  |  |  | || || |  |  |  |  |  | \\|\\=|  |__!__!_\n"
		"_I__I__|  ||/|__|__|__|__|__|__|_|| ||_|__|__|__|__|__|__|\\||- |__I__I_\n"
		"-|--|--|- ||-|--|--|--|--|--|--|-|| ||-|--|--|--|--|--|--|-||= |--|--|-\n"
		" |  |  |  || |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||  |  |  | \n"
		" |  |  |= || |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||= |  |  | \n"
		" |  |  |- || |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||= |  |  |	\n"
		" |  |  |- || |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||- |  |  | \n"
		"_|__|__|  ||_|__|__|__|__|__|__|_|| ||_|__|__|__|__|__|__|_||  |__|__|_\n"
		"-|--|--|= ||-|--|--|--|--|--|--|-|| ||-|--|--|--|--|--|--|-||- |--|--|-\n"
		"-|--|--|| |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||= |  |  |    \n"
		"~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~\n"
 		"                     _____________  ____________\n"
 		"                     |    yes    |  |  * NO *  |\n"
 		"                     -------------  ------------\n";

	int i = selection(2, yes_buttons, no_buttons);
	return (i);
}

int	choice_win_screen(void)
{
	char *yes_buttons =
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "    .    |                                  |.. \\/   .   .\n"
	"\\/   ..  |            you Win!              |         \\/  \n"
	"         |                                  |\\/   .   .  \n"
    ". \\/     |               GG                 |       .     \n"
	"    _.._ |                                  | .  .        \n"
	"    ..   |      you want fight again ?      |             \n"
	"         |    _____________  ____________   |    .    .\\/   \n"
	"   \\/    |    |  * YES *  |  |    no    |   |     \\/      \n"
	"         |    -------------  ------------   |    .           \n"
	"     \\/  |                                  |       .__.    \n"
    "   __..  |                                   |      \\/  .. \n"
    "\\/   .   +----------------------------------+  \\/     .   \n";

	char *no_buttons =
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "    .    |                                  |.. \\/   .   .\n"
	"\\/   ..  |            you Win!              |         \\/  \n"
	"         |                                  |\\/   .   .  \n"
    ". \\/     |               GG                 |       .     \n"
	"    _.._ |                                  | .  .        \n"
	"    ..   |      you want fight again ?      |             \n"
	"         |    _____________  ____________   |    .    .\\/   \n"
	"   \\/    |    |    yes    |  |  * NO *  |   |     \\/      \n"
	"         |    -------------  ------------   |    .           \n"
	"     \\/  |                                  |       .__.    \n"
    "   __..  |                                   |      \\/  .. \n"
    "\\/   .   +----------------------------------+  \\/     .   \n";

	int i = selection(2, yes_buttons, no_buttons);
	return (i);

}

int	choice_loose_screen(void)
{
	char *yes_buttons =
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "    .    |                                  |.. \\/   .   .\n"
	"\\/   ..  |            you Loose!           |         \\/  \n"
	"         |                                  |\\/   .   .  \n"
    ". \\/     |              RIP                 |       .     \n"
	"    _.._ |                                  | .  .        \n"
	"    ..   |            Try Again ?           |             \n"
	"         |    _____________  ____________   |    .    .\\/   \n"
	"   \\/    |    |  * YES *  |  |    no    |   |     \\/      \n"
	"         |    -------------  ------------   |    .           \n"
	"     \\/  |                                  |       .__.    \n"
    "   __..  |                                   |      \\/  .. \n"
    "\\/   .   +----------------------------------+  \\/     .   \n";

	char *no_buttons =
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "    .    |                                  |.. \\/   .   .\n"
	"\\/   ..  |            you Loose!           |         \\/  \n"
	"         |                                  |\\/   .   .  \n"
    ". \\/     |              RIP                 |       .     \n"
	"    _.._ |                                  | .  .        \n"
	"    ..   |            Try Again ?           |             \n"
	"         |    _____________  ____________   |    .    .\\/   \n"
	"   \\/    |    |     yes    | |  * NO *  |   |     \\/      \n"
	"         |    -------------  ------------   |    .           \n"
	"     \\/  |                                  |       .__.    \n"
    "   __..  |                                   |      \\/  .. \n"
    "\\/   .   +----------------------------------+  \\/     .   \n";

	int i = selection(2, yes_buttons, no_buttons);
	return (i);
}

int	choice_region(t_hero *hero, int unlock)
{
	char *book_region_f1 =
		"        ______________________________   ______________________________\n"
		"    .-/|                              \\ /                               |||| \n"
		"   |||| |                  |>>>      | |           ,-,                  |||| \n"
		"   |||| |              _  _|_  _     | |           | '--'|              |||| \n"
		"   |||| |             |;|_|;|_|;|    | |      _    | .---'              |||| \n"
		"   |||| |              \\: .   /      | |     | '---| |                  |||| \n"
		"   |||| |               ||:   |      | |     '-----| |      _           |||| \n"
		"   |||| |               ||: . |      | |    ((_))  | |     /|\\          |||| \n"
		"   |||| |               ||    |      | |    (o o)  | |    | | |         |||| \n"
		"   |||| |--`~-`-'--~--~~||~`--|,--_  | |  _~_\\_/~- |_|_ ~~\\ |~/--~_~    |||| \n"
		"   |||| |                            | |                                |||| \n"
		"   |||| |                            | |                                |||| \n"
		"   |||| |                            | |                                |||| \n"
		"   |||| |____________________________| |                                |||| \n"
		"   ||||________________________________|________________________________|||| \n"
		"   ||/=================================\\|/=================================\\|| \n"
		"   `-----------------------------------~___~---------------------------------'' \n";

	char *book_region_f2 =
		"        ______________________________   ______________________________\n"
		"    .-/|                              \\ /                               |||| \n"
		"   ||||                    |>>>        | |         ,-,                | |||| \n"
		"   ||||                _  _|_  _       | |         | '--'|            | |||| \n"
		"   ||||               |;|_|;|_|;|      | |    _    | .---'            | |||| \n"
		"   ||||                \\: .   /        | |   | '---| |                | |||| \n"
		"   ||||                 ||:   |        | |   '-----| |      _         | |||| \n"
		"   ||||                 ||: . |        | |  ((_))  | |     /|\\        | |||| \n"
		"   ||||                 ||    |        | |  (o o)  | |    | | |       | |||| \n"
		"   ||||  --`~-`-'--~--~~||~`--|,--_    | |_~_\\_/~- |_|_ ~~\\ |~/--~_~  | |||| \n"
		"   ||||                                | |                            | |||| \n"
		"   ||||                                | |                            | |||| \n"
		"   ||||                                | |                            | |||| \n"
		"   ||||                                | |____________________________| |||| \n"
		"   ||||________________________________|________________________________|||| \n"
		"   ||/=================================\\|/=================================\\|| \n"
		"   `-----------------------------------~___~---------------------------------'' \n";


	char *book_region_f3 =
		"        ______________________________   ______________________________\n"
		"    .-/||                               \\ /                             |\\-.  \n"
		"   ||||| |    ___   ____              | |                                |||\n"
		"   ||||| |  /' --;^/ ,-_\\       \\ | / | |                               |||| \n"
		"   ||||| | / / --o\\ o--\\ \\     --(_)--| |                               |||| \n"
		"   ||||| |/-/-/|o|-|\\-\\| \\      / | \\ | |                               |||| \n"
		"   ||||| | '`  ` |-|   ``             | |                                ||| \n"
		"   ||||| |       |-|                  | |                                ||| \n"
		"   ||||| |    ...|-|...._....         | |                                ||| \n"
		"   ||||| |,;;;;;;;;;;;;;;;;;;;;;;,    | |                                ||| \n"
		"   ||||| |;;;;;;;;;;;;;;;;;;;;;;;;~~~~| |                                ||| \n"
		"   ||||| |  ~~~~ ~~~~~~ ~~  ~~   ~~ ~~| |                                ||| \n"
		"   ||||| |    ~~~~~  ~~     ~~~~~   ~ | |                                ||| \n"
		"   ||||| |____________________________| |                                ||| \n"
		"   |||||________________________________|________________________________||| \n"
		"   ||/=================================\\|/=================================\\|| \n"
		"   `-----------------------------------~___~---------------------------------'' \n";

	char *book_region_lock_f1 =
		"        ______________________________   ______________________________\n"
		"    .-/|                              \\ /                               |||| \n"
		"   |||| |                  |>>>      | |             .-\"\"\"-.            |||| \n"
		"   |||| |              _  _|_  _     | |            / .---. \\           |||| \n"
		"   |||| |             |;|_|;|_|;|    | |           / /     \\ \\          |||| \n"
		"   |||| |              \\: .   /      | |           | |     | |          |||| \n"
		"   |||| |               ||:   |      | |           | |.-\"-.|-|          |||| \n"
		"   |||| |               ||: . |      | |          //`.:::::.`\\\\         |||| \n"
		"   |||| |               ||    |      | |         ; :: _____ :: ;        |||| \n"
		"   |||| |--`~-`-'--~--~~||~`--|,--_  | |        |  ::/%4d \\::  |       |||| \n"
		"   |||| |                            | |         | ::\\_____/:: |        |||| \n"
		"   |||| |                            | |          \\  ':::::'  /         |||| \n"
		"   |||| |                            | |           ''-.....-''          |||| \n"
		"   |||| |____________________________| |                                |||| \n"
		"   ||||________________________________|________________________________|||| \n"
		"   ||/=================================\\|/=================================\\|| \n"
		"   `-----------------------------------~___~---------------------------------'' \n";

	char *book_region_lock_f2 =
		"        ______________________________   ______________________________\n"
		"    .-/|                              \\ /                               |||| \n"
		"   ||||                    |>>>        | |           .-\"\"\"-.          | |||| \n"
		"   ||||                _  _|_  _       | |          / .---. \\         | |||| \n"
		"   ||||               |;|_|;|_|;|      | |         / /     \\ \\        | |||| \n"
		"   ||||                \\: .   /        | |         | |     | |        | |||| \n"
		"   ||||                 ||:   |        | |         | |.-\"-.|-|        | |||| \n"
		"   ||||                 ||: . |        | |        //`.:::::.`\\\\       | |||| \n"
		"   ||||                 ||    |        | |       ; :: _____ :: ;      | |||| \n"
		"   ||||  --`~-`-'--~--~~||~`--|,--_    | |      |  ::/%4d \\::  |     | |||| \n"
		"   ||||                                | |       | ::\\_____/:: |      | |||| \n"
		"   ||||                                | |        \\  ':::::'  /       | |||| \n"
		"   ||||                                | |         ''-.....-''        | |||| \n"
		"   ||||                                | |____________________________| |||| \n"
		"   ||||________________________________|________________________________|||| \n"
		"   ||/=================================\\|/=================================\\|| \n"
		"   `-----------------------------------~___~---------------------------------'' \n";

	char *book_region_lock_f3 =
		"        ______________________________   ______________________________\n"
		"    .-/||                             \\ /                               |\\-.  \n"
		"   ||||| |         .-\"\"\"-.            | |                                |||\n"
		"   ||||| |        / .---. \\           | |                                ||| \n"
		"   ||||| |       / /     \\ \\          | |                                ||| \n"
		"   ||||| |        | |     | |         | |                                ||| \n"
		"   ||||| |       | |.-\"-.|-|          | |                                ||| \n"
		"   ||||| |      //`.:::::.`\\\\         | |                                ||| \n"
		"   ||||| |     ; :: _____ :: ;        | |                                ||| \n"
		"   ||||| |    |  ::/%4d \\::  |       | |                                ||| \n"
		"   ||||| |     | ::\\_____/:: |        | |                                ||| \n"
		"   ||||| |      \\  ':::::'  /         | |                                ||| \n"
		"   ||||| |       ''-.....-''          | |                                ||| \n"
		"   ||||| |____________________________| |                                ||| \n"
		"   ||||________________________________|_________________________________||| \n"
		"   ||/=================================\\|/=================================\\|| \n"
		"   `-----------------------------------~___~---------------------------------'' \n";

		int i = 0;
		int	donjon_kill = 0;
		int	desert_kill = 0;

		donjon_kill = 10 - hero->donjon_kill;
		desert_kill = 20 - hero->desert_kill;

		if (unlock == 0)
			i = selection_var(3, donjon_kill, desert_kill, book_region_lock_f1, book_region_lock_f2, book_region_lock_f3);
		else if (unlock == 1)
			i = selection_var(3, donjon_kill, desert_kill,  book_region_f1, book_region_f2, book_region_lock_f3);
		else if (unlock == 2)
			i = selection_var(3, donjon_kill, desert_kill, book_region_f1, book_region_f2, book_region_f3);
		return (i);
}


