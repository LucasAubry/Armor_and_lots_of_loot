#include "game.h"


//loose
void	fight_loose_animation(int round, t_hero *info_hero, t_monster *info_monster, t_monster_enum monster)
{
	print_monster(monster);	
}


//win
void	fight_win_animation(int round, t_hero *info_hero, t_monster *info_monster, t_monster_enum monster)
{
	print_monster(monster);
}
