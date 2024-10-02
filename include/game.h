/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:35:27 by laubry            #+#    #+#             */
/*   Updated: 2024/10/02 19:39:27 by laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

/* ========== INCLUDE ============= */

# include "unistd.h"
# include "stdlib.h"
# include "signal.h"
# include "stdio.h"
# include "string.h"
# include "ncurses.h"
# include <termios.h>
# include "readline/readline.h"
# include "readline/history.h"
# include "item.h"
# include "time.h"
//# include "./../lib/include/libft.h"

extern volatile int	g_var;
/* ========== ENUM ================= */
typedef enum s_monster_enum
{
	BEE,
	WHALE,
	CACTUS,
    SANTORE,
	SPIDER,
} t_monster_enum;

typedef enum s_region_enum
{
	DONJON,
	DESERT,
	OCEAN,
} t_region_enum;
/* ========== STRUCTURE ============= */

typedef struct s_inventory
{
	t_item_stats	*item_1;	
	char				*item_1_equip;
	t_item_stats	*item_2;	
	char				*item_2_equip;
	t_item_stats	*item_3;	
	char				*item_3_equip;
	t_item_stats	*item_4;	
	char				*item_4_equip;
	t_item_stats	*item_5;	
	char				*item_5_equip;
}	t_inventory;

typedef	struct s_player
{
	int			save;
}	t_player;

typedef struct s_hero
{
	int				chest[3];//la source du problemme
	int				xp;
	int				hp_max;
	int				hp;
	int				gold;
	int				attack;
	int				armor;	
//----montser_killed----------
	int				donjon_kill;
	int				desert_kill;
	int				ocean_kill;

	t_inventory		*inventory;
}	t_hero;

typedef struct s_monster
{
	int				xp;
	int				hp;
	int				attack;
	int				armor;
	struct s_monster	*next;
}	t_monster;

typedef struct s_shop
{
	t_item_stats	*item_1;
	char			*logo_item_1;
	char			*name_item_1;
	t_item_stats	*item_2;
	char			*logo_item_2;	
	char			*name_item_2;
	t_item_stats	*item_3;
	char			*logo_item_3;	
	char			*name_item_3;
	t_item_stats	*item_4;
	char			*logo_item_4;	
	char			*name_item_4;
}	t_shop;

/* ========== Error =================*/

/* ========== FONCTION ============= */

void	reset_stats(t_hero *info_hero, t_monster *info_monster);
void	shop(t_shop *info_shop, t_item *item, t_hero *hero);

void	print_stats(t_hero *info_hero);
void	print_gamestart(void);
void	print_choice(void);
void	print_you_die(void);
//t_monster_enum	monster_choice(t_monster *info_monster, t_hero *hero);
//void	loose_animations(void);
//void	win_animations(void);
void	print_animation(const char *frames[], int num_frames, int *tab, t_hero *info_hero);
void	print_monster(t_monster_enum monster, int *tab, t_hero *info_hero);
void	gain_calcul(t_hero *info_hero, int *tab, t_monster_enum monster);
void	print_shop(t_shop *shop, t_hero *hero);
void	print_bannier_fight(void);
int		check_buying(t_shop *shop, t_item *item, t_hero *hero);
void	print_shop_bought(t_shop *shop, t_item_stats *item, int num_item);
void	change_shop(t_item *item, t_shop *shop, t_hero *hero);
void	print_profil(t_hero *hero);
void	profil_stats(t_hero *hero);
void	equip_item(t_hero *hero, int item);
void	select_option(t_hero *hero, int item);
void	in_shop(t_shop *shop, t_item *item, t_hero *hero);
int		check_consummable(t_item_stats *item, t_hero *hero);
void	delet_stats(t_hero *hero, int i);
void	copy_stats(t_hero *hero, t_item_stats *stats);
void	fusion_item(t_hero *hero, int item);
int		choice_shop_button(void);
int		choice_fight_button(void);
int		choice_win_screen(void);
int		choice_loose_screen(void);

//fight
t_monster_enum	monster_choice_region(t_monster *info_monster, int region);
int		fight_region(t_hero *info_hero, t_monster *info_monster,t_item *item, t_shop *shop, int region);
int		selection_chest(int num, ...);
int	print_chest(void);
void	open_chest(int region, t_hero *hero);


/*-----------tools-----------*/
int choix_aleatoire_pondere(int elements[], int poids[], int taille);
int *xp_changer_monster(t_hero *hero);
int *xp_changer_item(t_hero *hero);
int	arrow_selection(char **frames, int nombre_de_frames);
int	selection(int num, ...);
int selection_var(int num, int var1, int var2, ...);

int	choice_equip(t_hero *hero, int item);
int	choice_buying(t_item_stats *item);
int getchr(void);

/*------------selection------*/
int arrow_selection_logo(char **frames, int nombre_de_frames, char *logo);
int	selection_logo(char *logo, int num, ...);
int	selection_position(int position, int num, ...);
int	choice_region(t_hero *hero, int unlock);

void library(t_shop *shop, t_hero *hero);
int	print_library(void);
int buy_book(int book, int prix);
int selection_book(int num, int var1, ...);




/*------------fight-----------*/
void	fight(t_hero *hero, t_monster *monster, t_item *item, t_shop *shop);


/*---------background-------*/
int	background_tower(int position);
int	background_desert(int position);
int	background_ocean(int position);


void save(t_hero *hero, const char *filename);
void load(t_hero *hero, const char *filename);





/*-----------free------------*/
void	free_double_char(char **str);

/*----------init-------------*/
void	init_hero(t_hero *info_hero);
void	init_shop(t_shop *info_shop);
void	init_monster(t_monster *info_monster);
void	init_inventory(t_inventory *inventory);

char	**setframe_main_menu(char **tab_frame);




/*----------ANIMATION--------*/
extern const char *santore_frames[];
extern const char *whale_frames[];
extern const char *bee_frames[];
extern const char *cactus_frames[];
extern const char *spider_frames[];

extern const size_t SANTORE_NUM_FRAMES;
extern const size_t WHALE_NUM_FRAMES;
extern const size_t BEE_NUM_FRAMES;
extern const size_t CACTUS_NUM_FRAMES;
extern const size_t SPIDER_NUM_FRAMES;


/*-------------error-----------------*/

/*------------tools------------------*/
/*------------parsing----------------*/

/*----------tools_for_cat----------*/
/*--------------free-----------------*/


#endif
