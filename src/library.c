#include "game.h"

void	book1(t_hero *hero)
{
	int	prix = 10;//prix du livre

	int i = buy_book(1, prix);
	if (i == 0)
		//equip
		(void)hero;
	else
		return ;
}

void	book2(t_hero *hero)
{
	int prix = 50;//prix du livre

	int i = buy_book(2, prix);
	if (i == 0)
		//equip
		(void)hero;
	else
		return ;
}

void	book3(t_hero *hero)
{
	int prix = 100;//le prix du livre;
	int i = buy_book(3, prix);
	if (i == 0)
		//equip
		(void)hero;
	else
		return ;
}

void	book4(t_hero *hero)
{
	int prix = 500;//le prix du livre;

	int i = buy_book(4, prix);
	if (i == 0)
		//equip
		(void)hero;
	else
		return ;
}

void	library(t_shop *shop, t_hero *hero)
{
	(void)shop;
	int i = 0; 
	while (1)
	{
		i = print_library();
		if (i == 0)
			return ;
		else if (i == 1)
			book1(hero);
		else if (i == 2)
			book2(hero);
		else if (i == 3)
			book3(hero);
		else if (i == 4)
			book4(hero);
	}
}
