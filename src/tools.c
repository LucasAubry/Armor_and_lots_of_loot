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
	if (hero->xp >= 10)
	{
		tab[0] = 9;
		tab[1] = 0;
		tab[2] = 1;
		tab[3] = 3;
	}
	if (hero->xp <= 7)
	{
		tab[0] = 2;
		tab[1] = 0;
		tab[2] = 2;
		tab[3] = 4;
	}
	if (hero->xp <= 4)
	{
		tab[0] = 1;
		tab[1] = 0;
		tab[2] = 3;
		tab[3] = 3;
	}
	if (hero->xp <= 2)
	{
		tab[0] = 0;
		tab[1] = 0;
		tab[2] = 5;
		tab[3] = 1;
	}
	return (tab);
}
