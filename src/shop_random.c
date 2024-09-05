#include "game.h"
#include "item_enum.h"

t_universal *get_item(t_item *item, t_universal *result)
{
	int	i = 0;
	int	poids[] = {1, 1, 1, 1};
	int	taille;
    t_universal wood_sword = {healing, hp, attack, armor, logo}; //met les stats de l'epee
    t_universal potion_heal = {healing, hp, attack, armor, logo};//met les stats de la potion
	t_universal low_heart = {healing, hp, attack, armor, logo};
	t_universal wood_shield = {healing, hp, attack, armor, logo};

    t_universal tab[4] = {wood_sword, potion_heal, low_heart, wood_shield};

	taille = sizeof(tab) / sizeof(tab[0]);
	i = choix_aleatoir_ponderer(tab, poids, taille);

   //t_universal *result = malloc(sizeof(t_universal)); //malloc car on va return
    result->healing = tab[i].healing; //on donne a notre resultat les stats de la potion
    result->hp = tab[i].hp;
    result->attack = tab[i].attack;
    result->armor = tab[i].armor;
    result->logo = tab[i].logo;
    return result;
}

int main()
{
    t_universal *rand_struct = test();
    printf("%d\n", rand_struct->a);

    return 0;
}
