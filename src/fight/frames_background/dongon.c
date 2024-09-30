#include "game.h"

int	background_tower(int position)
{
	char *tower_f1 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>>                            \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                      \\,/ \n"
"                                             ||:   |                         /`\\\n"
"  o          _00_                             |: . |                           \n"
" /|\\         |__|                           __|_   |                           \n"
" / \\  ____--`~   '--~~__            __ ----~    ~`---,              ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";

	char *tower_f2 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>                             \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                /`\\       \n"
"                                             ||:   |                   \\,/    \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"        o    _00_                             |: . |                           \n"
"       /|\\   |__|                           __|_   |                           \n"
"       /_\\--`~   '--~~__            __ ----~    ~`---,              ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f3 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>                              \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |       \\,/                 \n"
"                                             ||:  .|             /`\\           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"               o                              |: . |                           \n"
"              /|\\                           __|_   |                           \n"
"      ____--`~/ \\'--~~__            __ ----~    ~`---,              ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f4 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>                             \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /     /`\\                   \n"
"                                             ||:   |            \\,/            \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_    o                        |: . |                           \n"
"             |__|   /|\\                     __|_   |                           \n"
"      ____--`~   '--/_\\             __ ----~    ~`---,              ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f5 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>>                            \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /      \\,/                 \n"
"                                            \\:  .  /            /`\\            \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                             |: . |                           \n"
"             |__|          o                __|_   |                           \n"
"      ____--`~   '--~~__  /|\\       __ ----~    ~`---,              ___       \n"
"-~--~                   ~-/-\\_ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f6 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>                             \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|     /`\\                 \n"
"                                           \\.    .  /           \\,/            \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                             |: . |                           \n"
"             |__|             o             __|_   |                           \n"
"      ____--`~   '--~~__     /|\\    __ ----~    ~`---,              ___       \n"
"-~--~                   ~---_/ \\--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f7 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>                              \n"
"                                                |                              \n"
"                                            _  _|_  _     \\,/                  \n"
"                                           |;|_|;|_|;|         /`\\             \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                   o         |: . |                           \n"
"             |__|                  /|\\      __|_   |                           \n"
"      ____--`~   '--~~__           /_\\ ----~    ~`---,              ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f8 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                              o |>>                             \n"
"                                             /|\\|        /`\\                   \n"
"                                            _/ \\|_  _        \\,/              \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                             |: . |                           \n"
"             |__|                           __|_   |                           \n"
"      ____--`~   '--~~__            __ ----~    ~`---,              ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f9 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>>       \\,/                  \n"
"                                                |              /`\\             \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                             |: . |                           \n"
"             |__|                           __|_   |    o                     \n"
"      ____--`~   '--~~__            __ ----~    ~`---, /|\\          ___        \n"
"-~--~                   ~---__ ,--~'                  ~/-\\--_____-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f10 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>>                \\,/          \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                             |: . |                           \n"
"             |__|                           __|_   |           o             \n"
"      ____--`~   '--~~__            __ ----~    ~`---,        /|\\   ___        \n"
"-~--~                   ~---__ ,--~'                  ~~----__/_\\-~'   `~----~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";
	char *tower_f11 =
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n"
"                                                |>                              \n"
"                                                |                              \n"
"                                            _  _|_  _                          \n"
"                                           |;|_|;|_|;|                         \n"
"                                           \\.    .  /                         \n"
"                                            \\:  .  /                          \n"
"                                             ||:   |                           \n"
"                                             ||:.  |                           \n"
"                                             ||:  .|                           \n"
"                                             ||:   |                           \n"
"                                             ||: , |                           \n"
"                                             ||:   |                           \n"
"             _00_                             |: . |                           \n"
"             |__|                           __|_   |                    o     \n"
"      ____--`~   '--~~__            __ ----~    ~`---,              ___/|\\     \n"
"-~--~                   ~---__ ,--~'                  ~~----_____-~'   /~\\---~~\n"
"                                                                               \n"
"                                                                               \n"
"                                                                               \n";	int i = selection_position(position, 11, tower_f1, tower_f2, tower_f3,
			tower_f4, tower_f5, tower_f6, tower_f7, tower_f8,
			tower_f9, tower_f10, tower_f11);
	return (i);
}
