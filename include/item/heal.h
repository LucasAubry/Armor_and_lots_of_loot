#ifndef HEAL_H
# define HEAL_H

#include "item.h"

typedef struct s_potion_heal
{
	t_item_stats *stats;
	char	*logo;
	int		id;
}	t_potion_heal;

///////////////////////////////////////////////////////////////////
//////////////////////////ITEM_HEAL////////////////////////////////
///////////////////////////////////////////////////////////////////

typedef struct s_heal
{
	t_potion_heal *potion_heal;

}	t_heal;

#endif