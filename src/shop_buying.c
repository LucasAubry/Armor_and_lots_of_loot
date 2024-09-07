#include "game.h"

int	full_inventory(t_hero *hero)
{
	int full_inventory = 0;
	if (hero->inventory->item_1->name == NULL)
		full_inventory += 1;
	if (hero->inventory->item_2->name == NULL)
		full_inventory += 1;
	if (hero->inventory->item_3->name == NULL)
		full_inventory += 1;
	if (hero->inventory->item_4->name == NULL)
		full_inventory += 1;
	if (hero->inventory->item_5->name == NULL)
		full_inventory += 1;
	if (full_inventory == 5)
		return (1);
	else
		return (0);
}

int	can_buying(char *line, char *name_item, t_hero *hero, int price_item)
{
	if (strcmp(line, name_item))
	{
		printf("this item is not in the shop\n");
		return (0);
	}
	if (full_inventory(hero))
	{
		printf("your inventory is full");
		return (0);
	}
	if (hero->gold < price_item)
	{
		printf("you dont have money for this item");
		return (0);
	}
	return (1);

}

void	put_in_inventory(t_item_stats *item, t_hero *hero)
{
	if (hero->inventory->item_1->name != NULL)
		hero->inventory->item_1 = item;
	else if (hero->inventory->item_2->name != NULL)
		hero->inventory->item_2 = item;
	else if (hero->inventory->item_3->name != NULL)
		hero->inventory->item_3 = item;
	else if (hero->inventory->item_3->name != NULL)
		hero->inventory->item_4 = item;
	else if (hero->inventory->item_5->name != NULL)
		hero->inventory->item_5 = item;
}

void	buy_item(t_item_stats *item, t_hero *hero, int item_price)
{
	char *line;
	line = readline("Are you sure you want to buy this item ?\n");
	if (!strcmp(line, "no") || (!strcmp(line, "No")))
		return ;
	hero->gold = hero->gold - item_price;
	put_in_inventory(item, hero);
	printf("gg you have a new items\n");
}

void	check_buying(t_shop *shop_instance, t_item *item, t_hero *hero, char *line)
{
	char *exit;

	if (can_buying(line, shop_instance->item_1->name, hero, shop_instance->item_1->price))
		buy_item(shop_instance->item_1, hero, shop_instance->item_1->price);
	else if (can_buying(line, shop_instance->item_2->name, hero, shop_instance->item_2->price))
		buy_item(shop_instance->item_2, hero, shop_instance->item_2->price);
	else if (can_buying(line, shop_instance->item_3->name, hero, shop_instance->item_3->price))
		buy_item(shop_instance->item_3, hero, shop_instance->item_3->price);
	else if (can_buying(line, shop_instance->item_4->name, hero, shop_instance->item_4->price))
		buy_item(shop_instance->item_4, hero, shop_instance->item_4->price);

	usleep(100000);

	exit = readline("do you want leave the shop ?\n");
	if (!strcmp(exit, "yes"))
		return;
	else
		shop(shop_instance, item, hero);
}

