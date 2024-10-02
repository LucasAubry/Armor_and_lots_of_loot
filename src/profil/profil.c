#include "game.h"

void	sell_item(t_hero *hero, int item)
{
	if (item == 1)
	{
		if (!strcmp(hero->inventory->item_1_equip, "✅"))
			delet_stats(hero, 1);
		hero->inventory->item_1_equip = "❌";
		hero->inventory->item_1->number = 0;
		hero->inventory->item_1->name = NULL;
		hero->gold += hero->inventory->item_1->price / 2;
	}
	else if (item == 2)
	{
		if (!strcmp(hero->inventory->item_2_equip, "✅"))
			delet_stats(hero, 2);
		hero->inventory->item_2_equip = "❌";
		hero->inventory->item_2->number = 0;
		hero->inventory->item_2->name = NULL;
		hero->gold += hero->inventory->item_2->price / 2;
	}
	else if (item == 3)
	{
		if (!strcmp(hero->inventory->item_3_equip, "✅"))
			delet_stats(hero, 3);
		hero->inventory->item_3_equip = "❌";
		hero->inventory->item_3->number = 0;
		hero->inventory->item_3->name = NULL;
		hero->gold += hero->inventory->item_3->price / 2;
	}
	else if (item == 4)
	{
		if (!strcmp(hero->inventory->item_4_equip, "✅"))
			delet_stats(hero, 4);
		hero->inventory->item_4_equip = "❌";
		hero->inventory->item_4->number = 0;
		hero->inventory->item_4->name = NULL;
		hero->gold += hero->inventory->item_4->price / 2;
	}
	else if (item == 5)
	{	
		if (!strcmp(hero->inventory->item_5_equip, "✅"))
			delet_stats(hero, 5);
		hero->inventory->item_5_equip = "❌";
		hero->inventory->item_5->number = 0;
		hero->inventory->item_5->name = NULL;
		hero->gold += hero->inventory->item_5->price / 2;
	}
}

void	select_option(t_hero *hero, int item)
{
	int i = choice_equip(hero, item);
	if (i == 0)
	{
		equip_item(hero, item);
		profil_stats(hero);
	}
	else if (i == 3)
		profil_stats(hero);
	else if (i == 1)
	{
		fusion_item(hero, item);
		profil_stats(hero);
	}
	else if (i == 2)
	{
		sell_item(hero, item);
		profil_stats(hero);
	}
}

int	check_equip(char *equip, t_hero *hero)
{
	if (!strcmp(equip, "✅"))
	{
		printf("\nitem already equipped\n");
		sleep(2);
		profil_stats(hero);
	}
	return (0);
}

void	equip_item(t_hero *hero, int item)
{
	if (item == 1)
	{
		if (check_equip(hero->inventory->item_1_equip, hero) ||
				(!check_consummable(hero->inventory->item_1, hero)))
			return ;
		else
		{
			hero->inventory->item_1_equip = "✅";
			copy_stats(hero, hero->inventory->item_1);
		}
	}
	else if (item == 2)
	{	
		if (check_equip(hero->inventory->item_2_equip, hero) ||
				(!check_consummable(hero->inventory->item_2, hero)))
			return ;
		else
		{
			hero->inventory->item_2_equip = "✅";
			copy_stats(hero, hero->inventory->item_2);
		}
	}
	else if (item == 3)
	{	
		if (check_equip(hero->inventory->item_3_equip, hero) ||
				(!check_consummable(hero->inventory->item_3, hero)))
			return ;
		else
		{
			hero->inventory->item_3_equip = "✅";
			copy_stats(hero, hero->inventory->item_3);
		}
	}
	else if (item == 4)
	{
		if (check_equip(hero->inventory->item_4_equip, hero) ||
				(!check_consummable(hero->inventory->item_4, hero)))
			return ;
		else
		{
			hero->inventory->item_4_equip = "✅";
			copy_stats(hero, hero->inventory->item_4);
		}
	}
	else if (item == 5)
	{	
		if (check_equip(hero->inventory->item_5_equip, hero) ||
				(!check_consummable(hero->inventory->item_5, hero)))
			return ;
		else
		{
			hero->inventory->item_5_equip = "✅";
			copy_stats(hero, hero->inventory->item_5);
		}
	}
}

void profil_stats(t_hero *hero)
{
   	printf("\033[H\033[J");
   	print_stats(hero);
	//print_hero
   	print_profil(hero);
   	printf("Select item (1-5), or press Backspace to exit\n > ");

   	int ch = getchr();

   	switch(ch) {
   	    case '1':
   	        if (hero->inventory->item_1->name)
   	            select_option(hero, 1);
   	        break;
   	    case '2':
   	        if (hero->inventory->item_2->name)
   	            select_option(hero, 2);
   	        break;
   	    case '3':
   	        if (hero->inventory->item_3->name)
   	            select_option(hero, 3);
   	        break;
   	    case '4':
   	        if (hero->inventory->item_4->name)
   	            select_option(hero, 4);
   	        break;
   	    case '5':
   	        if (hero->inventory->item_5->name)
   	            select_option(hero, 5);
   	        break;
   		case 127:
			return ;
   	    default:
   			break;
   	}
	return ;
}
