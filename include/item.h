#ifndef ITEM_H
# define ITEM_H

typedef struct s_item_stats
{
	int	healing;
	int	hp;
	int	attack;
	int	armor;

}	t_item_stats;

typedef struct s_universal
{
    int 	healing;
    int 	hp;
	int		attack;
	int		armor;
	char	*logo;
}           t_universal;

#include "item/heal.h"
#include "item/hp.h"
#include "item/attack.h"
#include "item/armor.h"

typedef struct s_item
{
	t_heal *heal;
	t_hp *hp;
	t_attack *attack;
	t_armor *armor;

} t_item;


void	init_item(t_item *item);
void	init_attack(t_item *item);
void	init_heal(t_item *item);
void	init_hp(t_item *item);
void	init_armor(t_item *item);

#endif