#include "game.h"

void save(t_hero *hero, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier de sauvegarde");
        return;
    }

    // Sauvegarde des données principales du héros
    fprintf(file, "chest: %d %d %d\n", hero->chest[0], hero->chest[1], hero->chest[2]);
    fprintf(file, "xp: %d\n", hero->xp);
    fprintf(file, "hp_max: %d\n", hero->hp_max);
    fprintf(file, "hp: %d\n", hero->hp);
    fprintf(file, "gold: %d\n", hero->gold);
    fprintf(file, "attack: %d\n", hero->attack);
    fprintf(file, "armor: %d\n", hero->armor);
    fprintf(file, "donjon_kill: %d\n", hero->donjon_kill);
    fprintf(file, "desert_kill: %d\n", hero->desert_kill);
    fprintf(file, "ocean_kill: %d\n", hero->ocean_kill);

	for (int i = 0; i < 5; i++) {
        t_item_stats *item = (i == 0) ? hero->inventory->item_1 :
                            (i == 1) ? hero->inventory->item_2 :
                            (i == 2) ? hero->inventory->item_3 :
                            (i == 3) ? hero->inventory->item_4 :
                                       hero->inventory->item_5;
        char *equip = (i == 0) ? hero->inventory->item_1_equip :
                      (i == 1) ? hero->inventory->item_2_equip :
                      (i == 2) ? hero->inventory->item_3_equip :
                      (i == 3) ? hero->inventory->item_4_equip :
                                 hero->inventory->item_5_equip;
        if (item) {
			fprintf(file, "item_%d: %d %d %d %d %d %d %d %s %s\n", i + 1, 
					item->healing, item->hp, item->attack, item->armor, item->price, item->number, item->consummable, item->logo, item->name);
            }
		fprintf(file, "equip_%d: %s\n", i + 1, equip ? equip : "none");
	}
	fclose(file);
}


void load(t_hero *hero, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier");
        return;
    }

    // Lire les valeurs du héros...
    fscanf(file, "chest: %d %d %d\n", &hero->chest[0], &hero->chest[1], &hero->chest[2]);
    fscanf(file, "xp: %d\n", &hero->xp);
    // Lire les autres attributs...

    // Chargement de l'inventaire
    for (int i = 0; i < 5; i++) {
        char logo[256]; // Buffer pour logo
        char name[256]; // Buffer pour name
        char equip[256]; // Buffer pour equip

        // Lire les données de l'item
        fscanf(file, "item_%d: %d %d %d %d %d %d %d %s %s\n", &i, 
               &hero->inventory->item_1->healing, &hero->inventory->item_1->hp, 
               &hero->inventory->item_1->attack, &hero->inventory->item_1->armor, 
               &hero->inventory->item_1->price, &hero->inventory->item_1->number, 
               &hero->inventory->item_1->consummable, logo, name);

        // Allouer et copier les chaînes de caractères
        hero->inventory->item_1->logo = strdup(logo);
        hero->inventory->item_1->name = strdup(name);

        // Lire l'état d'équipement
        fscanf(file, "equip_%d: %s\n", &i, equip);

        // Assigner les valeurs dans l'inventaire
        switch (i) {
            case 0:
                hero->inventory->item_1_equip = strdup(equip);
                break;
            case 1:
                hero->inventory->item_2_equip = strdup(equip);
                break;
            case 2:
                hero->inventory->item_3_equip = strdup(equip);
                break;
            case 3:
                hero->inventory->item_4_equip = strdup(equip);
                break;
            case 4:
                hero->inventory->item_5_equip = strdup(equip);
                break;
        }
    }

    fclose(file);
}

