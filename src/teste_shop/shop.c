#include "game.h"
#include "item_enum.h"

void	print_shop(t_shop *info_shop)
{
	if (info_shop->item_1 != NULL)
	{
		printf("shop item 1 : %d, %d, %d, %d, %s\n",
		       info_shop->item_1->healing,
		       info_shop->item_1->hp,
		       info_shop->item_1->attack,
		       info_shop->item_1->armor,
		       info_shop->logo_item_1);
		printf("shop item 2 : %d, %d, %d, %d, %s\n",
		       info_shop->item_2->healing,
		       info_shop->item_2->hp,
		       info_shop->item_2->attack,
		       info_shop->item_2->armor,
		       info_shop->logo_item_2);
		printf("shop item 3 : %d, %d, %d, %d, %s\n",
		       info_shop->item_3->healing,
		       info_shop->item_3->hp,
		       info_shop->item_3->attack,
		       info_shop->item_3->armor,
		       info_shop->logo_item_3);
		printf("shop item 4 : %d, %d, %d, %d, %s\n",
		       info_shop->item_4->healing,
		       info_shop->item_4->hp,
		       info_shop->item_4->attack,
		       info_shop->item_4->armor,
		       info_shop->logo_item_4);
	}
}

void	put_in_shop(t_shop *shop, t_universal *result, int i)
{
	if (i == 1)
	{
		shop->item_1->healing = result->healing;
		shop->logo_item_1 = result->logo;
	}
	else if (i == 2)
	{
		shop->item_2->attack = result->attack;
		shop->logo_item_2 = result->logo;
	}
	else if (i == 3)
	{
		shop->item_3->hp = result->hp;
		shop->logo_item_3 = result->logo;
	}
	else if (i == 4)
	{
		shop->item_4->armor = result->armor;
		shop->logo_item_4 = result->logo;
	}
}

void	select_item_inshop(t_item *item, t_shop *shop)
{
	t_universal *result = malloc(sizeof(t_universal));
	get_item(item, result);
	put_in_shop(shop, result, 1);
	free(result);
}

void	shop(t_shop *info_shop, t_item *item)
{
	select_item_inshop(item, info_shop);
	print_shop(info_shop);
	usleep(10000000);
//	(void)item
//	(void)info_hero;
//	return ;
}
