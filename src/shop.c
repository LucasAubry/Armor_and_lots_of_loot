#include "game.h"
#include "item_enum.h"

//void	print_shop(t_shop *info_shop)
//{
//		
//}

void	put_in_shop(t_shop *shop, t_universal *result, int i)
{
	if (i == 1)
	{
		shop->stats->healing = result->healing;
		shop->logo = result->logo;
	}
	else if (i == 2)
	{
		shop->stats->attack = result->attack;
		shop->logo = result->logo;
	}
	else if (i == 3)
	{
		shop->stats->hp = result->hp;
		shop->logo = result->logo;
	}
	else if (i == 4)
	{
		shop->stats->armor = result->armor;
		shop->logo = result->logo;
	}
}

void	select_item_inshop(t_item *item, t_shop *shop);
{
	t_universal *result = malloc(sizeof(t_universal));
	t_universal *item_selected = get_item(item, result);
	put_in_shop(shop, result, 2);
	free(result);
}

void	shop(t_shop *info_shop, t_hero *info_hero, t_item *item)
{
	select_item_inshop(item, shop);
//	print_shop();
//	(void)item
//	(void)info_hero;
	return ;
}
