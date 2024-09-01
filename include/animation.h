#ifndef ANIMATION_H
#define ANIMATION_H

#include <stdio.h>
#include <unistd.h>

typedef enum s_monster_enum
{
    SANTORE,
    CRAB,
    OURS,
} t_monster_enum;

// Déclarations des frames pour chaque monstre
extern const char *santore_frames[];
extern const char *crab_frames[];
extern const char *ours_frames[];

extern const size_t SANTORE_NUM_FRAMES;
extern const size_t CRAB_NUM_FRAMES;
extern const size_t OURS_NUM_FRAMES;
// Déclaration des fonctions d'animation
void print_animation(const char *frames[], int num_frames);
void print_monster(t_monster_enum monster);

#endif

