#include "game.h"

void in_region(int position, int region, t_hero *hero, t_monster *monster,
               t_item *item, t_shop *shop)
{
    while (1)
    {
        if (region == DONJON)
            position = background_tower(position);
        else if (region == DESERT)
            position = background_desert(position);
		else if (region == OCEAN)
			position = background_ocean(position);

        if (((region == DONJON || region == OCEAN) && position == 2) ||
			   	(region == DESERT && (position == 3 || position == 7)))
        {
		 	open_chest(region, hero);
            continue;
        }
        else if ((region == DONJON && position == 7) || (region == DESERT && position == 1) ||
			   (region == OCEAN && position >= 7 && position <= 10)) // Condition pour le combat
        {
            if (fight_region(hero, monster, item, shop, region) == 0)
				return ;
            continue;
        }
        else if (position == 0) 
		{
			// Sortie
            break;
        }
    }
}

int	select_region()
{
	int i = choice_region();
	if (i == 0)
		return (DONJON);
	else if (i == 1)
		return (DESERT);
	else
		return (OCEAN);
}

void	fight(t_hero *hero, t_monster *monster, t_item *item, t_shop *shop)
{
	int region = 0;

	if (choice_fight_button())
		return ;
	region = select_region();//a faire
	in_region(0, region, hero, monster, item, shop);
}
