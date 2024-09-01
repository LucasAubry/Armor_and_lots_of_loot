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
# include "animation.h"
//# include "./../lib/include/libft.h"

extern volatile int	g_var;
/* ========== ENUM ================= */

/* ========== STRUCTURE ============= */

typedef	struct s_player
{
	int			save;
	int			door;
}	t_player;

typedef struct s_hero
{
	//t_token_enum	type; // COMMANDE 
	int				in_live;
	int				hp;
	long			gold;
	int				attack;
	int				armor;
	struct s_hero	*next; // next
}	t_hero;

typedef struct s_monster
{
	int				in_live;
	int				hp;
	int				attack;
	int				armor;
	struct s_monster	*next;
}	t_monster;

/* ========== Error =================*/

/* ========== FONCTION ============= */

void	reset_stats(t_hero *info_hero, t_monster *info_monster);
int		fight(t_hero *info_hero, t_monster *info_monster);
void	shop(t_hero *info_hero);
void	save(t_hero *info_hero, t_monster *info_monster, t_player *info_player);
void	print_stats(t_hero *info_hero);
void	print_monster(t_monster_enum monster);
void	print_gamestart(void);
void	print_choice(void);



/*-------------error-----------------*/

/*------------tools------------------*/
/*------------parsing----------------*/

/*----------tools_for_cat----------*/
/*--------------free-----------------*/

#endif
