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

int	main(void)
{
	srand(time(NULL));
	t_hero *info_hero = malloc(sizeof(t_hero));
    t_monster *info_monster = malloc(sizeof(t_monster));
    t_player *info_player = malloc(sizeof(t_player));
	t_item	*item = malloc(sizeof(t_item));
	t_shop	*info_shop = malloc(sizeof(t_shop));

	char		**tab_frame = NULL;
	char		*line;
	int			i = 0;

	init_hero(info_hero);
	init_monster(info_monster);
	init_item(item);
	init_shop(info_shop);
	change_shop(item, info_shop, info_hero);
	
	print_gamestart();
	print_save();
	line = readline("select your save> ");
	if (!select_save(atoi(line), info_player))
	{
		free(line);
		return (0);
	}
	while (1)
	{
		print_choice();//shop, fight, save, quit

		tab_frame = setframe_main_menu(tab_frame);
		i = selection(5, tab_frame[0], tab_frame[1], tab_frame[2], tab_frame[3], tab_frame[4]);

		if (i == 0)
			shop(info_shop, item, info_hero);
		else if (i == 1)
			fight(info_hero, info_monster, item, info_shop);
		else if (i == 2)
			save(info_hero, info_monster, info_player);
		else if (i == 3)
			profil_stats(info_hero);
		else if (i == 4)
		{
			printf("au revoir\n");
			free(line);
			return (0);
		}
		else
		{
			printf("invalide choice\n");
			usleep(1000000);
		}
		if (info_hero->hp <= 0)
		{
			print_you_die();
			free(line);
			return (0);// retour au menu mais apres un clique	
		}
	}
}
