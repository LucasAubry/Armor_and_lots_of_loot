#include "game.h"

t_monster_enum randome(void)
{
    int elements[] = {SANTORE, CRAB, OURS};
    int poids[] = {10, 0, 0};// modifier les choix en fonction de l'xp
    int taille = sizeof(elements) / sizeof(elements[0]);

    return choix_aleatoire_pondere(elements, poids, taille);
}


t_monster_enum	monster_choice(t_monster *info_monster)
{
    t_monster_enum monster = randome();

    switch (monster)
	{
        case SANTORE:
            info_monster->hp = 50;
            info_monster->attack = 4;
            info_monster->armor = 2;
            break;
        case CRAB:
            info_monster->hp = 10;
            info_monster->attack = 2;
            info_monster->armor = 1;
            break;
        case OURS:
            info_monster->hp = 30;
            info_monster->attack = 3;
            info_monster->armor = 2;
            break;
    }
	return (monster);
}

