#ifndef GAME_H
# define GAME_H

/* ========== INCLUDE ============= */

# include "unistd.h"
# include "stdlib.h"
# include "signal.h"
# include "stdio.h"
# include "string.h"
# include "readline/readline.h"
# include "readline/history.h"
# include "time.h"
//# include "./../lib/include/libft.h"

extern volatile int	g_var;
/* ========== ENUM ================= */
typedef enum s_monster_enum
{
    SANTORE,
    CRAB,
    OURS,
} t_monster_enum;

/* ========== STRUCTURE ============= */

typedef	struct s_player
{
	int			save;
	int			door;
}	t_player;

typedef struct s_hero
{
	//t_token_enum	type; // COMMANDE 
	int				xp;
	int				hp;
	long			gold;
	int				attack;
	int				armor;
	struct s_hero	*next; // next
}	t_hero;

typedef struct s_monster
{
	int				xp;
	int				hp;
	int				attack;
	int				armor;
	struct s_monster	*next;
}	t_monster;

/* ========== Error =================*/

/* ========== FONCTION ============= */

void	reset_stats(t_hero *info_hero, t_monster *info_monster);
void	fight(t_hero *info_hero, t_monster *info_monster);
void	shop(t_hero *info_hero);
void	save(t_hero *info_hero, t_monster *info_monster, t_player *info_player);
void	print_stats(t_hero *info_hero);
void	print_gamestart(void);
void	print_choice(void);
void	print_you_die(void);
t_monster_enum	monster_choice(t_monster *info_monster);
void	loose_animations(void);
void	win_animations(void);
void	print_animation(const char *frames[], int num_frames, int *tab, t_hero *info_hero);
void	print_monster(t_monster_enum monster, int *tab, t_hero *info_hero);
void	gain_calcul(t_hero *info_hero, int *tab, t_monster_enum monster);

/*----------ANIMATION--------*/
extern const char *santore_frames[];
extern const char *crab_frames[];
extern const char *ours_frames[];

extern const size_t SANTORE_NUM_FRAMES;
extern const size_t CRAB_NUM_FRAMES;
extern const size_t OURS_NUM_FRAMES;


/*-------------error-----------------*/

/*------------tools------------------*/
/*------------parsing----------------*/

/*----------tools_for_cat----------*/
/*--------------free-----------------*/


#endif