#include "game.h"

void	item_to_item(t_item_stats *item_conteneur, t_item_stats *item_content)
{
	item_conteneur->healing += item_content->healing;
	item_conteneur->hp += item_content->hp;
	item_conteneur->attack += item_content->attack;
	item_conteneur->armor += item_content->armor;
	item_conteneur->price += item_content->price;
	item_conteneur->number += item_content->number;
}

int	check_equiped(t_hero *hero, char *item_principale, char *item_fusioned, 
		t_item_stats *item_conteneur, t_item_stats *item_content)
{
	if (!strcmp(item_principale, "❌") && !strcmp(item_fusioned, "❌"))
	{
		item_to_item(item_conteneur, item_content);
		item_content->number = 0;
		item_content->name = NULL;
		return (0);
	}
	else
	{
		item_to_item(item_conteneur, item_content);
		copy_stats(hero, item_content);//a supprimer si les stats sont doubler
		item_content->number = 0;
		item_content->name = NULL;
		return (1);
	}
}

int	compare_item_fusion(t_hero *hero, int item_fusion, t_item_stats *item_conteneur, char *item_principale)
{
	int i = 0;
	if (item_fusion == 1)
	{
		i = check_equiped(hero, item_principale, hero->inventory->item_1_equip, item_conteneur, hero->inventory->item_1);
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
