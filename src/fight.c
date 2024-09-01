#include "game.h"

void	monster_choice(t_monster *info_monster)
{	
	//randome avec de l'aleatoir en fonction de la door
	//plus la door est elever plus les gros montre spawn
//	monster = 0//fonction randome en fonction de la door
	info_monster->hp = 10;
	info_monster->attack = 1;
	info_monster->armor = 0;
	print_monster(SANTORE);
}

void	reset_stats(t_hero *info_hero, t_monster *info_monster)
{
	info_hero->hp = 10;
	info_hero->gold = 0;
	info_hero->attack = 1;
	info_hero->armor = 0;

	info_monster->hp = 10;
	info_monster->attack = 1;
	info_monster->armor = 0;
}

int	fight(t_hero *info_hero, t_monster *info_monster)
{
//	char	*line;
	printf("put stop for stop the fight");
	while (info_hero->hp > 0 && info_monster->hp > 0)// ou que stop et presser
	{
		monster_choice(info_monster);
		info_hero->hp = info_hero->hp -1;
		info_monster->hp = info_monster->hp -1; // faire un systeme de dega en fonction de l'armure et de l'ataque
		//line = readline(0);
	}
	return (0);
	//loose = return (0);
	//win / stop = return (1);
}
