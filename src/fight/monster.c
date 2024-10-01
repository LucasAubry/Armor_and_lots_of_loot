#include "game.h"

int *choice_region_monster(int region)
{
	int *tab = (int *)malloc(5 * sizeof(int));
	memset(tab, 0, 5 * sizeof(int));
//	if (region == )
//	{
//		tab[BEE] = 0;
//		tab[WHALE] = 0;
//		tab[CACTUS] = 0;
//		tab[SANTORE] = 0;
//		tab[SPIDER] = 0;
//	}
	if (region == OCEAN)
	{
		tab[BEE] = 0;
		tab[WHALE] = 10;
		tab[CACTUS] = 0;
		tab[SANTORE] = 0;
		tab[SPIDER] = 0;
	}
	if (region == DESERT)
	{
		tab[BEE] = 2;
		tab[WHALE] = 0;
		tab[CACTUS] = 8;
		tab[SANTORE] = 0;
		tab[SPIDER] = 4;
	}
	if (region == DONJON)
	{
		tab[BEE] = 9;
		tab[WHALE] = 0;
		tab[CACTUS] = 0;
		tab[SANTORE] = 1;
		tab[SPIDER] = 3;
	}
	return (tab);
}

t_monster_enum randome_region(int region)
{
    int elements[] = {BEE, WHALE, CACTUS, SANTORE, SPIDER};
    int *poids = choice_region_monster(region);// modifier les choix en fonction de la region
    int taille = sizeof(elements) / sizeof(elements[0]);

	if (poids == NULL)
		return (BEE);

    int total_poids = 0;
    for (int i = 0; i < taille; i++) {
        total_poids += poids[i];
    }
	if (total_poids == 0)
	{
		free(poids);
		return (BEE);
	}
	t_monster_enum monster = choix_aleatoire_pondere(elements, poids, taille);
	free(poids);
	return (monster);
}

t_monster_enum	monster_choice_region(t_monster *info_monster, int region)
{
    t_monster_enum monster = randome_region(region);
	if (monster < BEE || monster > SPIDER)
		return (BEE);

    switch (monster)
	{
        case BEE:
            info_monster->hp = 3;
            info_monster->attack = 1;
            info_monster->armor = 0;
			break;
        case WHALE:
            info_monster->hp = 5;
            info_monster->attack = 1;
            info_monster->armor = 1;
            break;
		case CACTUS:
			info_monster->hp = 7;
			info_monster->attack = 1;
			info_monster->armor = 2;
            break;
        case SANTORE:
            info_monster->hp = 25;
            info_monster->attack = 4;
            info_monster->armor = 2;
            break;
		case SPIDER:
			info_monster->hp = 8;
			info_monster->attack = 3;
			info_monster->armor = 0;
			break;
    }
	return (monster);
}

