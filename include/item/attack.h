#ifndef ATTACK_H
# define ATTACK_H

#include "item.h"

typedef struct s_wood_sword
{

	wood_sword->stats->attack = 1;
	t_item_stats *stats;
	char	*logo;

}	t_wood_sword;

///////////////////////////////////////////////////////////////////
//////////////////////////ITEM_ATTACK//////////////////////////////
///////////////////////////////////////////////////////////////////

typedef struct s_attack
{
	t_wood_sword *wood_sword;	
	
} t_attack;

#endif
