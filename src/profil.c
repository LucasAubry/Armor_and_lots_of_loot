#include "game.h"

void	copy_stats(t_hero *hero, t_item_stats *stats)
{
	hero->hp += stats->healing;// si le nombre de pv max n'est pas attein
	hero->hp += stats->hp;
	hero->attack += stats->attack;
	hero->armor += stats->armor;
	profil_stats(hero);		
}

void	select_option(t_hero *hero, int item)
{
	printf(
		"\nSelect :\n\n"
		"-Equip\n"
		"-Fusion\n"
		"-Exit\n");
	char *line = readline("> ");
	if (!strcmp(line, "Equip") || (!strcmp(line, "equip")))
		equip_item(hero, item);
	else if (!strcmp(line, "exit"))
		profil_stats(hero);
	//else if (!strcmp(line, "Fusion"))
		//fusion_item(hero, item);
	else
	{
		printf("\noption dont existe\n");
		sleep(2);
		select_option(hero, item);
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
		if (check_equip(hero->inventory->item_1_equip, hero))
			select_option(hero, item);
		hero->inventory->item_1_equip = "✅";
		copy_stats(hero, hero->inventory->item_1);
	}
	else if (item == 2)
	{	if (check_equip(hero->inventory->item_2_equip, hero))
			select_option(hero, item);
		hero->inventory->item_2_equip = "✅";
		copy_stats(hero, hero->inventory->item_2);
	}
	else if (item == 3)
	{	
		if (check_equip(hero->inventory->item_3_equip, hero))
			select_option(hero, item);
		hero->inventory->item_3_equip = "✅";
		copy_stats(hero, hero->inventory->item_3);
	}
	else if (item == 4)
	{
		if (check_equip(hero->inventory->item_4_equip, hero))
			select_option(hero, item);
		hero->inventory->item_4_equip = "✅";
		copy_stats(hero, hero->inventory->item_4);
	}
	else if (item == 5)
	{	
		if (check_equip(hero->inventory->item_5_equip, hero))
			select_option(hero, item);
		hero->inventory->item_5_equip = "✅";
		copy_stats(hero, hero->inventory->item_5);
	}
}

void	profil_stats(t_hero *hero)
{
	printf("\033[H\033[J");
	print_stats(hero);
	print_profil(hero);
	char *line = readline("select item\n > ");
	if (hero->inventory->item_1->name && !strcmp(line, "1"))
		select_option(hero, 1);	
	else if (hero->inventory->item_2->name && !strcmp(line, "2"))
		select_option(hero, 1);	
	else if (hero->inventory->item_3->name && !strcmp(line, "3"))
		select_option(hero, 1);	
	else if (hero->inventory->item_4->name && !strcmp(line, "4"))
		select_option(hero, 1);	
	else if (hero->inventory->item_5->name && !strcmp(line, "5"))
		select_option(hero, 1);	
	else if (!strcmp(line, "exit"))
		return;
	else
		profil_stats(hero);
}
