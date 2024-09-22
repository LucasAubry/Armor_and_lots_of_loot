#include "game.h"

t_monster_enum randome(t_hero *hero)
{
    int elements[] = {BEE, DISASTER, CACTUS, SANTORE};
    int *poids = xp_changer_monster(hero);// modifier les choix en fonction de l'xp
    int taille = sizeof(elements) / sizeof(elements[0]);

    return choix_aleatoire_pondere(elements, poids, taille);
}


t_monster_enum	monster_choice(t_monster *info_monster, t_hero *hero)
{
    t_monster_enum monster = randome(hero);

    switch (monster)
	{
        case BEE:
            info_monster->hp = 5;
            info_monster->attack = 1;
            info_monster->armor = 0;
        case DISASTER:
            info_monster->hp = 1;
            info_monster->attack = 0;
            info_monster->armor = 0;
            break;
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

