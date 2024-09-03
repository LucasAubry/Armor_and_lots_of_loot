#ifndef ITEM_H
# define ITEM_H

#include "item/heal.h"
#include "item/hp.h"
#include "item/attack.h"
#include "item/armor.h"

typedef struct s_item_stats
{
	int	healing;
	int	hp;
	int	attack;
	int	armor;

} t_item_stats;

typedef struct s_item
{
	struct t_heal *heal;
	struct t_hp *hp;
	struct t_attack *attack;
	struct t_armor *armor;

} t_item;


void	init_items(t_item *item);
void	init_attack(t_item *item);
void	init_heal(t_item *item);
void	init_hp(t_item *item);
void	init_armor(t_item *item);

#endif
