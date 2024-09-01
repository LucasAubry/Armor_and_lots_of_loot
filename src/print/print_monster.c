#include "animation.h"

void print_animation(const char *frames[], int num_frames, int round)
{
	if (round <= 0)
		round = 1;
    for (int i = 0; i < round; i++) {
        for (int j = 0; j < num_frames; j++) {
            printf("\033[H\033[J"); 
            printf("%s", frames[j]);
            usleep(300000);
        }
    }
}

void print_monster(t_monster_enum monster, int round)
{
    switch (monster) {
        case SANTORE:
            print_animation(santore_frames, SANTORE_NUM_FRAMES, round);
            break;
        case CRAB:
            print_animation(crab_frames, CRAB_NUM_FRAMES, round);
            break;
        case OURS:
            print_animation(ours_frames, OURS_NUM_FRAMES, round);
            break;
    }
}

