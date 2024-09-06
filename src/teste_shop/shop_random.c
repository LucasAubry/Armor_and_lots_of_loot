#include "game.h"
#include "item_enum.h"

void	init_universal_item(t_item *item, t_universal *wood_sword, 
                          t_universal *potion_heal, t_universal *low_heart, 
                          t_universal *wood_shield)
{
	wood_sword->healing = 0;
	wood_sword->hp = 0;
	wood_sword->attack = item->attack->wood_sword->stats->attack;
	wood_sword->armor = 0;
	wood_sword->logo = item->attack->wood_sword->logo;

	potion_heal->healing = item->heal->potion_heal->stats->healing;
	potion_heal->hp = 0;
	potion_heal->attack = 0;
	potion_heal->armor = 0;
	potion_heal->logo = item->heal->potion_heal->logo;

	low_heart->healing = 0;
	low_heart->hp = item->hp->low_heart->stats->hp;
	low_heart->attack = 0;
	low_heart->armor = 0;
	low_heart->logo = item->hp->low_heart->logo;

	wood_shield->healing = 0;
	wood_shield->hp = 0;
	wood_shield->attack = 0;
	wood_shield->armor = item->armor->wood_shield->stats->armor;
	wood_shield->logo = item->armor->wood_shield->logo;
}

void	get_item(t_item *item, t_universal *result)
{
//	//temporraire;
//    t_universal wood_sword = {1, 1, 3, 2, "logo_sword"};
//    t_universal potion_heal = {5, 0, 0, 0, "logo_potion"};
//    t_universal low_heart = {0, 3, 0, 0, "logo_heart"};
//    t_universal wood_shield = {0, 1, 0, 5, "logo_shield"};
//	//temporraire;
	t_universal wood_sword, potion_heal, low_heart, wood_shield;

	init_universal_item(item, &wood_sword, &potion_heal, &low_heart, &wood_shield);
    t_universal tab[4] = {wood_sword, potion_heal, low_heart, wood_shield};

	int	poids[] = {1, 1, 1, 1};// test
	int	taille = sizeof(tab) / sizeof(tab[0]);
	int i = choix_aleatoire_pondere_universal(poids, taille);

    result->healing = tab[i].healing; //on donne a notre resultat les stats de la potion
    result->hp = tab[i].hp;
    result->attack = tab[i].attack;
    result->armor = tab[i].armor;
    result->logo = tab[i].logo;
}
