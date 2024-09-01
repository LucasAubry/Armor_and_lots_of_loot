#include "game.h"

int choix_aleatoire_pondere(int elements[], int poids[], int taille)
{
    int i = 0;
    int total_poids = 0;
    int seuil;
    int choix = 0;

    for (i = 0; i < taille; i++) {
        total_poids += poids[i];
    }

    seuil = rand() % total_poids;

    int somme = 0;
    for (i = 0; i < taille; i++) {
        somme += poids[i];
        if (seuil < somme) {
            choix = elements[i];
            break;
        }
    }
    return choix;
}

t_monster_enum randome(void)
{
    int elements[] = {SANTORE, CRAB, OURS};
    int poids[] = {10, 0, 0};
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

