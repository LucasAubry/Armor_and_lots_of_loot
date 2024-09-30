#include "game.h"

int	background_ocean(int position)
{
	char *ocean_f1 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\      \\ | /                                               \n"
	"        / / --o\\ o-\\ \\ \\   --(_)--                                              \n"
	"       /-/-/|o|-|\\-\\|\\ \\    / | \\                                               \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|  o                                                           \n"
	"              |-| /|\\                                                          \n"
	"           ...|-|./.\\_....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~~~~   ~~~~~~  ~~~    ~~~        ~~~~   \n"
	"                                                   ~~~        ~~      ~~    ~~  \n";
	char *ocean_f2 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____          \\ | /                                            \n"
	"         /' --;^/ ,-_\\        --(_)--                                               \n"
	"        / / --o\\ o-\\ \\ \\       / | \\                                         \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                                    \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |_|o                                                             \n"
	"              |_||                                                             \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~~~    ~~~~~       ~~~        ~~~~~  \n"
	"                                           ~~             ~~        ~~~      ~~   \n";

	char *ocean_f3 =
	"                                                                               \n"
	"                                       \\ | /                                   \n"
	"           ___   ____                 --(_)--                                \n"
	"         /' --;^/ ,-_\\                 / | \\                                \n"
	"        / / --o\\ o-\\ \\ \\                                                   \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                                   \n"
	"        '`  ` |_|o  `` '                                                       \n"
	"              |_||                                                             \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,     ~~~      ~~~~~~~~~~  ~~~            \n"
	"                                                  ~~         ~             ~~~  \n";

	char *ocean_f4 =
	"                  o                                   \\ | /                               \n"
	"                 /|\\                                 --(_)--                            \n"
	"           ___   /_\\_                                 / | \\                            \n"
	"         /' --;^/ ,-_\\                                                  \n"
	"        / / --o\\ o-\\ \\ \\                                               \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                                \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,           ~~~~~~~~~   ~~     ~~         \n"
	"                                           ~~~                         ~~      \n";

	char *ocean_f5 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                         \\ | /           \n"
	"        / / --o\\ o-\\ \\ o                                      --(_)--          \n"
	"       /-/-/|o|-|\\-\\|\\/|\\                                      / | \\            \n"
	"        '`  ` |-|   ``/ \\                                                   \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~~   ~~~~~~~~~  ~~    ~~~~          ~~ \n"
	"                                          ~          ~            ~~~         ~\n";

	char *ocean_f6 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                        \n"
	"        / / --o\\ o-\\ \\ \\                                                   \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                                \\ | /    \n"
	"        '`  ` |-|   `` '                                               --(_)--  \n"
	"              |-|                                                       / | \\  \n"
	"              |-|                                                              \n"
	"              |-|           o                                                  \n"
	"           ...|-|...._.... /|\\                                                 \n"
	"       ,;;;;;;;;;;;;;;;;;;;/;\\;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~~   ~  ~~~~~  ~~~~       ~~~~~         \n"
	"                                           ~~                ~~~~      ~        \n";

	char *ocean_f7 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                        \n"
	"        / / --o\\ o-\\ \\ \\                                                    \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                                    \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|                                                            \\ | /\n"
	"              |-|                                                           --(_)\n"
	"           ...|-|...._....           o                                       / | \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.  /|\\                                        \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;/;\\,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,    ~~   ~~~~~~    ~~          ~~~~~    \n"
	"                                            ~~                 ~~~~             ~~ \n";

	char *ocean_f8 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                        \n"
	"        / / --o\\ o-\\ \\ \\                                                   \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                                   \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~o~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,          ~~~~~~~~~   ~~~     ~~~      \n"
	"                                                  ~~            ~~~~~         \n";

	char *ocean_f9 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                 \n"
	"        / / --o\\ o-\\ \\ \\                                              \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                               \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~o~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~   ~~~~~~~~~   ~~~~     ~~~     \n"
	"                                         ~~      ~~~~         ~~    ~~~~         \n";

	char *ocean_f10 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                 \n"
	"        / / --o\\ o-\\ \\ \\                                              \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                               \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~o~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~   ~~~~~~~~~   ~~~~     ~~~     \n"
	"                                         ~~      ~~~~         ~~    ~~~~         \n";

	char *ocean_f11 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                 \n"
	"        / / --o\\ o-\\ \\ \\                                              \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                               \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"              |-|                                                              \n"
	"           ...|-|...._....                                                     \n"
	"       ,;;;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~o,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ~   ~~~~~~~~~   ~~~~     ~~~     \n"
	"                                         ~~      ~~~~         ~~    ~~~~         \n";

	char *ocean_f12 =
	"                                                                               \n"
	"                                                                               \n"
	"           ___   ____                                                          \n"
	"         /' --;^/ ,-_\\                                                 \n"
	"        / / --o\\ o-\\ \\ \\                                             \n"
	"       /-/-/|o|-|\\-\\|\\ \\                                              \n"
	"        '`  ` |-|   `` '                                                       \n"
	"              |-|                                                              \n"
	"              |-|  \\ | /                                                           \n"
	"        o     |-| --(_)--                                                          \n"
	"       /|\\ ...|-|...._....                                                     \n"
	"       /;\\;;;;;;;;;;;;;;;;;;;;;;,.                                             \n"
	" ~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	" ~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,    ~~~~      ~   ~~ ~~   ~~~~     ~~~~  \n"
	"                                             ~~~~                    ~~~   ~    \n";

		int i = selection_position(position, 12, ocean_f1, ocean_f2, ocean_f3,
		   	ocean_f4, ocean_f5, ocean_f6, ocean_f7, ocean_f8, ocean_f9,
			ocean_f10, ocean_f11, ocean_f12);
	return (i);

}
