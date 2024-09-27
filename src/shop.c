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
		shop->item_1->number = stats->number;
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
		shop->item_2->number = stats->number;
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
		shop->item_3->number = stats->number;
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
		shop->item_4->number = stats->number;
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

	else if (i == item->attack->killer_book->id)
		copy_stats_in_shop(item->attack->killer_book->stats, 
				item->attack->killer_book->logo, shop, place_in_shop);

	else if (i == item->heal->heal_flower->id)
		copy_stats_in_shop(item->heal->heal_flower->stats, 
				item->heal->heal_flower->logo, shop, place_in_shop);
	//esle if (i == item->
}

void	select_item_inshop(t_item *item, t_shop *shop, t_hero *hero, int place_in_shop)
{
	int	element[] = {WOOD_SHIELD, WOOD_SWORD, HEAL_POTION, LOW_HEART, KILLER_BOOK, 
	HEAL_FLOWER};
	int	*poids = xp_changer_item(hero);//modifier les choix en fonnction de l'xp
	int taille = sizeof(element) / sizeof(element[0]);

	t_item_enum i = choix_aleatoire_pondere(element, poids, taille);
	item_selected(item, shop, i, place_in_shop);//i cest l'id de litem
	free(poids);
}//le problemme cest que ici choix aleatoir returne 0 et aucun enum nest 0 donc il ne devrait pas retoruner 0

void	change_shop(t_item *item, t_shop *shop, t_hero *hero)
{
	int	place_in_shop = 1;
	while (place_in_shop != 5)
	{
		select_item_inshop(item, shop, hero, place_in_shop);
		place_in_shop++;
	}
}

void	in_shop(t_shop *shop, t_item *item, t_hero *hero)
{
	print_shop(shop, hero);
	char *line = readline("\n>");
	if (!strcmp(line, "exit"))
		return ;
	else
		check_buying(shop, item, hero, line);
}

void	shop(t_shop *shop, t_item *item, t_hero *hero)
{
	char	*line;

  	printf("\033[H\033[J");
	print_bannier_shop();
	line = readline("do you want go to shop ?\n>");
	if (strcmp(line, "yes"))
		return ;
	in_shop(shop, item, hero);
}
