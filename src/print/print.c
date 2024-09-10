#include "game.h"

void print_hp(int hp, int hp_max)
{
	int i = 0;

	printf ("| HP      : %d | ", hp);
	while (i != hp)
	{
		printf("❤️  ");
		i++;
		usleep(10000);
	}
	while (i != hp_max)
	{
		printf("🖤 ");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void print_gold(long gold)
{
	int i = 0;

	printf ("| Gold    : %ld | ", gold);
	while (i != gold)
	{
		printf("💰");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void print_attack(int attack)
{
	int i = 0;

	printf ("| Attack  : %d | ", attack);
	while (i != attack)
	{
		printf("🗡 ");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void print_armor(int armor)
{
	int i = 0;

	printf ("| Armor   : %d | ", armor);
	while (i != armor)
	{
		printf("🛡️ ");
		i++;
		usleep(10000);
	}
	printf("\n");
}

void	print_stats(t_hero *info_hero)
{
	printf("\n+----------------------+");
	printf("\n|       Stats          |");
	printf("\n+----------------------+\n");
	print_hp(info_hero->hp, info_hero->hp_max);
	print_gold(info_hero->gold);
	print_attack(info_hero->attack);
	print_armor(info_hero->armor);
	printf("+----------------------+\n");
}
