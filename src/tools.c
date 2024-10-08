#include "game.h"
#include <ncurses.h>
#include <stdio.h>

int getchr(void) {
    struct termios oldattr, newattr;
    int ch;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO); // desactiver l'affichage echo en gros
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);

    while (1) {
        ch = getchar();
        if (ch == '1' || ch == '2' || ch == '3' ||
				ch == '4' || ch == '5' || ch == 127 ||ch == 10)
            break;
    }
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr); // Restaurer les anciens paramètres
    return ch;
}

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

//int *xp_changer_monster(t_hero *hero)
//{
//	int *tab = (int *)malloc(5 * sizeof(int));
//	memset(tab, 0, 5 * sizeof(int));
//	if (hero->xp >= 40)
//	{
//		tab[BEE] = 1;
//		tab[WHALE] = 2;
//		tab[CACTUS] = 3;
//		tab[SANTORE] = 9;
//		tab[SPIDER] = 4;
//	}
//	if (hero->xp <= 35)
//	{
//		tab[BEE] = 2;
//		tab[WHALE] = 4;
//		tab[CACTUS] = 7;
//		tab[SANTORE] = 1;
//		tab[SPIDER] = 6;
//	}
//	if (hero->xp <= 10)
//	{
//		tab[BEE] = 7;
//		tab[WHALE] = 5;
//		tab[CACTUS] = 1;
//		tab[SANTORE] = 0;
//		tab[SPIDER] = 2;
//	}
//	if (hero->xp <= 3)
//	{
//		tab[BEE] = 9;
//		tab[WHALE] = 3;
//		tab[CACTUS] = 1;
//		tab[SANTORE] = 0;
//		tab[SPIDER] = 2;
//	}
//	return (tab);
//}

int *xp_changer_item(t_hero *hero)
{
	int *tab = (int *)malloc(6 * sizeof(int));
	memset(tab, 0, 6 * sizeof(int));
	if (hero->xp >= 40)
	{
		tab[WOOD_SHIELD] = 2;
		tab[WOOD_SWORD] = 2;
		tab[HEAL_POTION] = 4;
		tab[LOW_HEART] = 6;
		tab[KILLER_BOOK] = 7;
		tab[HEAL_FLOWER] = 0;
	}
	if (hero->xp <= 35)
{
		tab[WOOD_SHIELD] = 3;
		tab[WOOD_SWORD] = 3;
		tab[HEAL_POTION] = 4;
		tab[LOW_HEART] = 4;
		tab[KILLER_BOOK] = 5;
		tab[HEAL_FLOWER] = 0;
	}
	if (hero->xp <= 10)
	{
		tab[WOOD_SHIELD] = 4;
		tab[WOOD_SWORD] = 4;
		tab[HEAL_POTION] = 5;
		tab[LOW_HEART] = 2;
		tab[KILLER_BOOK] = 1;
		tab[HEAL_FLOWER] = 2;
	}
	if (hero->xp <= 3)
	{
		tab[WOOD_SHIELD] = 5;//5
		tab[WOOD_SWORD] = 4;//4
		tab[HEAL_POTION] = 8;//8
		tab[LOW_HEART] = 1;//1
		tab[KILLER_BOOK] = 1;//1
		tab[HEAL_FLOWER] = 10;
	}
	return (tab);
}

