#ifndef ATTACK_H
# define ATTACK_H

#include "item.h"

typedef struct s_wood_sword
{
	t_item_stats *stats;
	char	*logo;
	int		id;
}	t_wood_sword;

typedef struct s_killer_book
{
	t_item_stats *stats;
	char	*logo;
	int		id;
}	t_killer_book;

///////////////////////////////////////////////////////////////////
//////////////////////////ITEM_ATTACK//////////////////////////////
///////////////////////////////////////////////////////////////////

typedef struct s_attack
{
	t_wood_sword *wood_sword;	
	t_killer_book *killer_book;
	
} t_attack;

#endif
