#include "game.h"

//dest cest litem dans le quelle lautre item selectionner (src) va etre fusioner
//en gros src devient rien et dest devient dest + src
void	merge_stats(t_item_stats *dest, t_item_stats *src)
{
	dest->healing += src->healing;
	dest->hp += src->hp;
	dest->attack += src->attack;
	dest->armor += src->armor;
	dest->price += src->price;
	dest->number += src->number;
}

int	check_equiped(t_hero *hero, char *main_item, char *fusion_item, 
		t_item_stats *dest, t_item_stats *src)
{
	if (src->name == NULL)
		return (0);
	if (!strcmp(dest->name, src->name))
	{
		if (!strcmp(main_item, "❌") && !strcmp(fusion_item, "❌"))
		{
			merge_stats(dest, src);
			src->number = 0;
			src->name = NULL;
			return (0);
		}
		else
		{
			merge_stats(dest, src);
			copy_stats(hero, src);
			src->number = 0;
			src->name = NULL;
			return (1);
		}
	}
	printf("it's not the same item\n");
	return (0);
}

int	compare_item_fusion(t_hero *hero, int item_fusion, t_item_stats *item_conteneur, char *item_principale)
{
	int i = 0;
	if (item_fusion == 1)
	{
		i = check_equiped(hero, item_principale, hero->inventory->item_1_equip, item_conteneur,	hero->inventory->item_1);
		hero->inventory->item_1_equip = "❌";
	}
	else if (item_fusion == 2)
	{
		i = check_equiped(hero, item_principale, hero->inventory->item_2_equip, item_conteneur, hero->inventory->item_2);
	    hero->inventory->item_2_equip = "❌";
	}
	else if (item_fusion == 3)
	{
		i = check_equiped(hero, item_principale, hero->inventory->item_3_equip, item_conteneur, hero->inventory->item_3);
	    hero->inventory->item_3_equip = "❌";
	}
	else if (item_fusion == 4)
	{
		i = check_equiped(hero, item_principale, hero->inventory->item_4_equip, item_conteneur, hero->inventory->item_4);
	    hero->inventory->item_4_equip = "❌";
	}
	else if (item_fusion == 5)
	{
		i = check_equiped(hero, item_principale, hero->inventory->item_5_equip, item_conteneur, hero->inventory->item_5);
	    hero->inventory->item_5_equip = "❌";
	}
	return (i);
}


void	fusion_item(t_hero *hero, int item)
{
	char *line;
	int i = 0;
	int item_fusion;

	line = readline("select the object to merge\n");
	item_fusion = atoi(line);
	if (item_fusion > 5)
		printf("the object does not exist\n");
	if (item == 1)
	{
		if (item_fusion != 1)
		{
			i = compare_item_fusion(hero, item_fusion, hero->inventory->item_1, hero->inventory->item_1_equip);
			if (i != 0)
				hero->inventory->item_1_equip = "✅";
		}
		else
			printf("you cannot merge an item with itself");
	}
	else if (item == 2)
	{	
		if (item_fusion != 2)
		{
			i = compare_item_fusion(hero, item_fusion, hero->inventory->item_2, hero->inventory->item_2_equip);
			if (i != 0)
				hero->inventory->item_2_equip = "✅";
		}
		else
			printf("you cannot merge an item with itself");
	}
	else if (item == 3)
	{
		if (item_fusion != 3)
		{
			i = compare_item_fusion(hero, item_fusion, hero->inventory->item_3, hero->inventory->item_3_equip);
			if (i != 0)
				hero->inventory->item_3_equip = "✅";
		}
		else
			printf("you cannot merge an item with itself");
	}
	else if (item == 4)
	{
		if (item_fusion != 4)
		{
			i = compare_item_fusion(hero, item_fusion, hero->inventory->item_4, hero->inventory->item_4_equip);
			if (i != 0)
				hero->inventory->item_4_equip = "✅";
		}
		else
			printf("you cannot merge an item with itself");
	}
	else if (item == 5)
	{	
		if (item_fusion != 5)
		{
			i = compare_item_fusion(hero, item_fusion, hero->inventory->item_5, hero->inventory->item_5_equip);
			if (i != 0)
				hero->inventory->item_5_equip = "✅";
		}
		else
			printf("you cannot merge an item with itself");
	}
}
