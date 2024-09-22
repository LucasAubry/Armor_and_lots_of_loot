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

//-------------------------XP CHNAGER----------------------

int *xp_changer_monster(t_hero *hero)
{
	int *tab = (int *)malloc(4 * sizeof(int));
	if (hero->xp >= 40)
	{
		tab[BEE] = 1;
		tab[CRAB] = 0;
		tab[CACTUS] = 3;
		tab[SANTORE] = 9;
	}
	if (hero->xp <= 35)
	{
		tab[BEE] = 3;
		tab[CRAB] = 0;
		tab[CACTUS] = 6;
		tab[SANTORE] = 2;
	}
	if (hero->xp <= 10)
	{
		tab[BEE] = 7;
		tab[CRAB] = 0;
		tab[CACTUS] = 2;
		tab[SANTORE] = 1;
	}
	if (hero->xp <= 3)
	{
		tab[BEE] = 8;
		tab[CRAB] = 0;
		tab[CACTUS] = 1;
		tab[SANTORE] =0;
	}
	return (tab);
}
