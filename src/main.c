#include "game.h"

int	select_save(int	line, t_player *info_player)
{
	if (line == 1)
		info_player->save = 1;
	else if (line == 2)
		info_player->save = 2;
	else if (line == 3)
		info_player->save = 3;
	else
	{
		printf("save invalide");
		return (0);
	}
	return (1);
}

void print_save(void)
{
    const char *saves[] = {"save/save_1", "save/save_2", "save/save_3"};
    FILE *fichier;

    for (int i = 0; i < 3; i++) {
        fichier = fopen(saves[i], "r");
        if (fichier) {
            printf("(%d) save_%d\n", i + 1, i + 1);
            fclose(fichier);
        } else {
            printf("(%d) vide\n", i + 1);
        }
    }
}

void	init_hero(t_hero *info_hero)
{
	info_hero->xp = 1;
	info_hero->hp = 10;
	info_hero->gold = 0;
	info_hero->attack = 1;
	info_hero->armor = 0;
}

void	init_monster(t_monster *info_monster)
{
	info_monster->xp = 1;
	info_monster->hp = 10;
	info_monster->attack = 1;
	info_monster->armor = 0;
}

int	main(void)
{
	t_hero *info_hero = malloc(sizeof(t_hero));
    t_monster *info_monster = malloc(sizeof(t_monster));
    t_player *info_player = malloc(sizeof(t_player));
	char		*line;

	init_hero(info_hero);
	init_monster(info_monster);
	
	print_gamestart();
	print_save();
	line = readline("select your save> ");
	if (!select_save(atoi(line), info_player))
		return (0);
	while (1)
	{
		print_stats(info_hero);
		print_choice();//shop, fight, save, quit
		line = readline("> ");
		if (atoi(line) == 1)
			shop(info_hero);
		else if (atoi(line) == 2)
			fight(info_hero, info_monster);
		else if (atoi(line) == 3)
			save(info_hero, info_monster, info_player);
		else if (atoi(line) == 4)
		{
			printf("au revoir\n");
			return (0);
		}
		else
			printf("invalide choice\n\n\n\n\n");
		if (info_hero->hp <= 0)
		{
			print_you_die();
			return (0);// retour au menu mais apres un clique	
		}
	}
}
