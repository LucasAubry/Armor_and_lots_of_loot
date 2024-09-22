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

	if (total_poids == 0)
		return (-1);
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
	memset(tab, 0, 4 * sizeof(int));
	if (hero->xp >= 40)
	{
		tab[BEE] = 1;
		tab[WHALE] = 2;
		tab[CACTUS] = 3;
		tab[SANTORE] = 9;
		tab[SPIDER] = 4;
	}
	if (hero->xp <= 35)
	{
		tab[BEE] = 2;
		tab[WHALE] = 4;
		tab[CACTUS] = 7;
		tab[SANTORE] = 1;
		tab[SPIDER] = 6;
	}
	if (hero->xp <= 10)
	{
		tab[BEE] = 7;
		tab[WHALE] = 5;
		tab[CACTUS] = 1;
		tab[SANTORE] = 0;
		tab[SPIDER] = 2;
	}
	if (hero->xp <= 3)
	{
		tab[BEE] = 9;
		tab[WHALE] = 3;
		tab[CACTUS] = 1;
		tab[SANTORE] = 0;
		tab[SPIDER] = 2;
	}
	return (tab);
}


