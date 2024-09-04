#ifndef ENUM_ITEM_H
# define ENUM_ITEM_H

typedef enum s_item_attack
{
	WOOD_SWORD,
}	t_item_attack;

typedef enum s_item_armor
{
	WOOD_SHIELD,
}	t_item_armor;

typedef enum s_item_healing
{
	POTION_HEAL,
}	t_item_healing;

typedef enum s_item_hp
{
	LOW_HEART,
}	t_item_hp;

int	random_item_attack(void);
int	random_item_hp(void);
int	random_item_healing(void);
int	random_item_armor(void);

#endif

