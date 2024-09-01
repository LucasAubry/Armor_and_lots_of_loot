#include "animation.h"

void print_animation(const char *frames[], int num_frames) {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < num_frames; j++) {
            printf("\033[H\033[J"); 
            printf("%s", frames[j]);
            usleep(300000);
        }
    }
}

void print_monster(t_monster_enum monster) {
    switch (monster) {
        case SANTORE:
            print_animation(santore_frames, SANTORE_NUM_FRAMES);
            break;
        case CRAB:
            print_animation(crab_frames, CRAB_NUM_FRAMES);
            break;
        case OURS:
            print_animation(ours_frames, OURS_NUM_FRAMES);
            break;
    }
}

