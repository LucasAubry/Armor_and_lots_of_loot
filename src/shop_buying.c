#include "game.h"

int	full_inventory(t_hero *hero)
{
	int full_inventory = 0;
	if (hero->inventory->item_1->name != NULL)
		full_inventory += 1;
	if (hero->inventory->item_2->name != NULL)
		full_inventory += 1;
	if (hero->inventory->item_3->name != NULL)
		full_inventory += 1;
	if (hero->inventory->item_4->name != NULL)
		full_inventory += 1;
	if (hero->inventory->item_5->name != NULL)
		full_inventory += 1;
	if (full_inventory == 5)
		return (1);
	else
		return (0);
}

int	can_buying(t_hero *hero, int price_item)
{
	char *line;
	if (full_inventory(hero))
	{
		printf("your inventory is full\n\n\n");
		line = readline("");
		return (0);
	}
	if (hero->gold < price_item)
	{
		printf("you dont have money for this item\n\n\n");
		line = readline("");
		return (0);
	}
	(void)line;
	return (1);

}

void	put_in_inventory(t_item_stats *item, t_hero *hero)
{
	t_item_stats *new_item;
	new_item = (t_item_stats *)malloc(sizeof(t_item_stats));
	*new_item = *item;


	memcpy(new_item, item, sizeof(t_item_stats));
    if (item->name != NULL)
        new_item->name = strdup(item->name);

    if (hero->inventory->item_1->name == NULL)
        hero->inventory->item_1 = new_item;
    else if (hero->inventory->item_2->name == NULL)
        hero->inventory->item_2 = new_item;
    else if (hero->inventory->item_3->name == NULL)
        hero->inventory->item_3 = new_item;
    else if (hero->inventory->item_4->name == NULL)
        hero->inventory->item_4 = new_item;
    else if (hero->inventory->item_5->name == NULL)
        hero->inventory->item_5 = new_item;
}

void	buy_item(t_item_stats *item, t_hero *hero, t_shop *shop, int item_price, int num_item)
{
	if (choice_buying(item))
		return ;
	hero->gold = hero->gold - item_price;
	put_in_inventory(item, hero);
	print_shop_bought(shop, item, num_item);
	//gg new item
}

int	check_buying(t_shop *shop_instance, t_item *item, t_hero *hero)
{
	int ch = getchr();

		if (ch == '1' && strcmp(shop_instance->item_1->name, "Nothing"))
		{
			if (can_buying(hero, shop_instance->item_1->price))
				buy_item(shop_instance->item_1, hero, shop_instance, shop_instance->item_1->price, 1);
		}
		else if (ch == '2' && strcmp(shop_instance->item_2->name, "Nothing"))
		{
			if (can_buying(hero, shop_instance->item_2->price))
				buy_item(shop_instance->item_2, hero, shop_instance, shop_instance->item_2->price, 2);
		}
		else if (ch == '3' && strcmp(shop_instance->item_3->name, "Nothing"))
		{
			if (can_buying(hero, shop_instance->item_3->price))
				buy_item(shop_instance->item_3, hero, shop_instance, shop_instance->item_3->price, 3);
		}
		else if (ch == '4' && strcmp(shop_instance->item_4->name, "Nothing"))
		{
			if (can_buying(hero, shop_instance->item_4->price))
				buy_item(shop_instance->item_4, hero, shop_instance, shop_instance->item_4->price, 4);
		}
		else if (ch == '5')
		{
			if (hero->gold <= 4)
				printf("you dont have money for this item\n\n\n");
			else
			{
				hero->gold = hero->gold -5;
				change_shop(item, shop_instance, hero);	
			}
		}
		else if (ch == 127)
			return (0);
		in_shop(shop_instance, item, hero);
		return (0);
}
