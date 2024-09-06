#include "game.h"

void	copy_stats_in_shop(t_item_stats *stats, char *logo, t_shop *shop, int place_in_shop)
{
	if (place_in_shop == 1)
	{
		shop->item_1->armor = stats->armor;
		shop->item_1->attack = stats->attack;
		shop->item_1->healing = stats->healing;
		shop->item_1->hp = stats->hp;
		shop->item_1->name = stats->name;
		shop->item_1->price = stats->price;
		shop->logo_item_1 = logo;
	}
	else if (place_in_shop == 2)
	{
		shop->item_2->armor = stats->armor;
		shop->item_2->attack = stats->attack;
		shop->item_2->healing = stats->healing;
		shop->item_2->hp = stats->hp;
		shop->item_2->name = stats->name;
		shop->item_2->price = stats->price;
		shop->logo_item_2 = logo;
	}
	else if (place_in_shop == 3)
	{
		shop->item_3->armor = stats->armor;
		shop->item_3->attack = stats->attack;
		shop->item_3->healing = stats->healing;
		shop->item_3->hp = stats->hp;
		shop->item_3->name = stats->name;
		shop->item_3->price = stats->price;
		shop->logo_item_3 = logo;
	}
	else if (place_in_shop == 4)
	{
		shop->item_4->armor = stats->armor;
		shop->item_4->attack = stats->attack;
		shop->item_4->healing = stats->healing;
		shop->item_4->hp = stats->hp;
		shop->item_4->name = stats->name;
		shop->item_4->price = stats->price;
		shop->logo_item_4 = logo;
	}
}	

void	item_selected(t_item *item, t_shop *shop, int i, int place_in_shop)
{
	if (i == item->armor->wood_shield->id)
		copy_stats_in_shop(item->armor->wood_shield->stats, 
				item->armor->wood_shield->logo, shop, place_in_shop);

	else if (i == item->attack->wood_sword->id)
		copy_stats_in_shop(item->attack->wood_sword->stats, 
				item->attack->wood_sword->logo, shop, place_in_shop);

	else if (i == item->heal->potion_heal->id)
		copy_stats_in_shop(item->heal->potion_heal->stats, 
				item->heal->potion_heal->logo, shop, place_in_shop);

	else if (i == item->hp->low_heart->id)
		copy_stats_in_shop(item->hp->low_heart->stats, 
				item->hp->low_heart->logo, shop, place_in_shop);
	//esle if (i == item->
}

void	select_item_inshop(t_item *item, t_shop *shop, int place_in_shop)
{
	int	element[] = {1, 2, 3, 4};
	int	poids[] = {1, 1, 1, 1};
	int taille = sizeof(element) / sizeof(element[0]);
	int	i = choix_aleatoire_pondere(element, poids, taille);
	item_selected(item, shop, i, place_in_shop);
}

void	shop(t_shop *shop, t_item *item, t_hero *hero)
{
	int	place_in_shop = 0;
	char	*line;
	while (place_in_shop != 5)
	{
		select_item_inshop(item, shop, place_in_shop);
		place_in_shop++;
	}
  	printf("\033[H\033[J");
	print_bannier_shop();
	line = readline("");
	print_shop(shop, hero);
	line = readline(">");
}
