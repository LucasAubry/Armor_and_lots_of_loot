#include "game.h"

t_monster_enum randome(t_hero *hero)
{
    int elements[] = {SANTORE, CRAB, BEE, CACTUS};
    int *poids = xp_changer_monster(hero);// modifier les choix en fonction de l'xp
    int taille = sizeof(elements) / sizeof(elements[0]);

    return choix_aleatoire_pondere(elements, poids, taille);
}


t_monster_enum	monster_choice(t_monster *info_monster, t_hero *hero)
{
    t_monster_enum monster = randome(hero);

    switch (monster)
	{
        case SANTORE:
            info_monster->hp = 50;
            info_monster->attack = 4;
            info_monster->armor = 2;
            break;
        case CRAB:
            info_monster->hp = 1;
            info_monster->attack = 0;
            info_monster->armor = 0;
            break;
        case BEE:
            info_monster->hp = 5;
            info_monster->attack = 1;
            info_monster->armor = 0;
			break;
		case CACTUS:
			info_monster->hp = 10;
			info_monster->attack = 1;
			info_monster->armor = 2;
            break;
    }
	return (monster);
}

