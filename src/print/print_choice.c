#include "game.h"

void printMenuFrame(int frame)
{
    const char *frames[] = {
        "  ╭──────────────────────────────────────────────────────────────╮\n"
        "  │                        MAIN MENU                          │\n"
        "  ├──────────────────────────────────────────────────────────────┤\n"
        "  │                                                             │\n"
        "  │   ╭──────────────────────────╮    ╭──────────────────────────╮ │\n"
        "  │   │   [1] SHOP              │    │   [2] FIGHT             	│ │\n"
        "  │   │   Explore items and     │    │   Engage in battle with  │ │\n"
        "  │   │   purchase equipment.   │    │   enemies to gain XP and │ │\n"
        "  │   ╰──────────────────────────╯    ╰──────────────────────────╯ │\n"
        "  │                                                           	   │\n"
        "  │   ╭──────────────────────────╮    ╭──────────────────────────╮ │\n"
        "  │   │   [3] SAVE              │    │   [4] QUIT              	│ │\n"
        "  │   │   Save your progress    │    │   Exit the game.        │ │\n"
        "  │   │   and continue later.   │    │                         │ │\n"
        "  │   ╰──────────────────────────╯    ╰──────────────────────────╯ │\n"
        "  │                                                              │\n"
        "  │   Please select an option by entering the corresponding      │\n"
        "  │   number (1, 2, 3, or 4).                                    │\n"
        "  │                                                              │\n"
        "  ╰──────────────────────────────────────────────────────────────╯\n\n",

        "  ╭──────────────────────────────────────────────────────────────╮\n"
        "  │                        MAIN MENU                            │\n"
        "  ├──────────────────────────────────────────────────────────────┤\n"
        "  │                                                            	  │\n"
        "  │  		 ╭──────────────────────────╮    ╭──────────────────────────╮│\n"
        "  │  		 │   [1] SHOP              │    │   [2] FIGHT            │ │\n"
        "  │  		 │   Explore items and     │    │   Engage in battle with  ││\n"
        "  │  		 │   purchase equipment.   │    │   enemies to gain XP and  │\n"
        "  │  		 ╰──────────────────────────╯    ╰──────────────────────────╯│\n"
        "  │                                                            │\n"
        "  │   ╭──────────────────────────╮    ╭──────────────────────────╮ │\n"
        "  │   │   [3] SAVE              │    │   [4] QUIT              	│ │\n"
        "  │   │   Save your progress    │    │   Exit the game.        	│ │\n"
        "  │   │   and continue later.   │    │                          │ │\n"
        "  │   ╰──────────────────────────╯    ╰──────────────────────────╯ │\n"
        "  │                                                              │\n"
        "  │   Please select an option by entering the corresponding      │\n"
        "  │   number (1, 2, 3, or 4).                                    │\n"
        "  │                                                              │\n"
        "  ╰──────────────────────────────────────────────────────────────╯\n\n",

        "  ╭──────────────────────────────────────────────────────────────╮\n"
        "  │                        MAIN MENU                             │\n"
        "  ├──────────────────────────────────────────────────────────────┤\n"
        "  │                                                              │\n"
        "  │  	╭──────────────────────────╮    ╭──────────────────────────╮ │\n"
        "  │   	│   [1] SHOP              │    │   [2] FIGHT             │ │\n"
        "  │  	│   Explore items and     │    │   Engage in battle with   │\n"
        "  │   	│   purchase equipment.   │    │   enemies to gain XP and  │\n"
        "  │   	╰──────────────────────────╯    ╰──────────────────────────╯ │\n"
        "  │                                                              │\n"
        "  ╭──────────────────────────╮    ╭──────────────────────────╮ │\n"
        "  │   [3] SAVE              │    │   [4] QUIT               │  │\n"
        "  │   Save your progress    │    │   Exit the game.         │  │\n"
        "  │   and continue later.   │    │                          │ │\n"
        "  ╰──────────────────────────╯    ╰──────────────────────────╯ │\n"
        "  │                                                              │\n"
        "  │   Please select an option by entering the corresponding      │\n"
        "  │   number (1, 2, 3, or 4).                                    │\n"
        "  │                                                              │\n"
        "  ╰──────────────────────────────────────────────────────────────╯\n\n"
    };
    frame = frame % 3;
    printf("%s", frames[frame]);
}

void	print_choice(void)
{
    int frames = 7;
    for (int i = 0; i < frames; i++) {
		printf("\033[H\033[J");
        printMenuFrame(i % 3); // Alterner entre les frames
        usleep(300000); // Délai de 300 millisecondes entre les frames
    }
}
