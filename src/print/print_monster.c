#include "game.h"

void	print_bannier_fight(void)
{
	printf(
		"                                 {} {}									\n"
		"                         !  !  ! II II !  !  !							\n"
		"                      !  I__I__I_II II_I__I__I  !						\n"
		"                      I_/|__|__|_|| ||_|__|__|\\_I						\n"
		"                   ! /|_/|  |  | || || |  |  |\\_|\\ !       			\n"
		"       .--.        I//|  |  |  | || || |  |  |  |\\\\I        .--.		\n"
		"      /-   \\    ! /|/ |  |  |  | || || |  |  |  | \\|\\ !    /=   \\		\n"
		"      \\=__ /    I//|  |  |  |  | || || |  |  |  |  |\\\\I    \\-__ /		\n"
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
		"~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~\n");
}

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

