#include "game.h"


void print_animation(const char *frames[], int num_frames, int *tab, t_hero *info_hero)
{
	if (tab[1] <= 0)
		tab[1] = 1;
	printf("\033[H\033[J");
    print_stats(info_hero);
    for (int i = 0; i < tab[1]; i++) {
        for (int j = 0; j < num_frames; j++) {
			printf("\033[10;0H");
    		printf("\033[J");
 			printf("\033[10;0H");
            printf("%s", frames[j]);
            usleep(300000);
        }
    }
	//gain_calcul(info_hero, tab, monster);
	//printf("\033[H\033[J");
 	//print_stats(info_hero);
}

void print_monster(t_monster_enum monster, int *tab, t_hero *info_hero)
{
    switch (monster) {
        case SANTORE:
            print_animation(santore_frames, SANTORE_NUM_FRAMES, tab, info_hero);
            break;
        case CRAB:
            print_animation(crab_frames, CRAB_NUM_FRAMES, tab, info_hero);
            break;
        case OURS:
            print_animation(ours_frames, OURS_NUM_FRAMES, tab, info_hero);
            break;
    }
}

