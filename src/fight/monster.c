#include "game.h"

t_monster_enum randome(t_hero *hero)
{
    int elements[] = {BEE, WHALE, CACTUS, SANTORE};
    int *poids = xp_changer_monster(hero);// modifier les choix en fonction de l'xp
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


t_monster_enum	monster_choice(t_monster *info_monster, t_hero *hero)
{
    t_monster_enum monster = randome(hero);
	if (monster < BEE || monster > SANTORE)
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
    }
	return (monster);
}

