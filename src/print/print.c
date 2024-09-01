#include "game.h"

void	print_hp(int hp)
{
	int	i = 0;

	printf ("hp >(%d) ", hp);
	while (i != hp)
	{
		printf("❤︎ ");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void	print_gold(long gold)
{
	int	i = 0;

	printf ("gold >(%ld) ", gold);
	while (i != gold)
	{
		printf("💰");
		i++;
	usleep(10000);
	}
	printf("\n");
}

void	print_attack(int attack)
{
	int	i = 0;

	printf ("attack >(%d) ", attack);
	while (i != attack)
	{
		printf("🗡 ");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void	print_armor(int armor)
{
	int	i = 0;

	printf ("armor >(%d) ", armor);
	while (i != armor)
	{
		printf("🛡️");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void	print_stats(t_hero *info_hero)
{
	printf("\n\n\n\n\n");
	print_hp(info_hero->hp);
	print_gold(info_hero->gold);
	print_attack(info_hero->attack);
	print_armor(info_hero->armor);
	printf("\n\n\n\n\n");
}
