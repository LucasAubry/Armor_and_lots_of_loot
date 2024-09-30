#include "game.h"

const char *whale_frames[] = {
	"                                       \n"
	"                                       \n"
	"                                       \n"
	"                 o                     \n"
	"                /|\\                   \n"
	"       _________/_\\       |\"\"\\/\"\"|\n"
	"    ,'             `.      \\    /    \n"
	"   |     O           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"             ~                ~        \n"
	"          ~          ~                 \n"
	"               ~                       \n",

	"                                       \n"
	"                                       \n"
	"                                       \n"
	"               __o/                    \n"
	"                 |                     \n"
	"       _________/_\\      |\"\"\\/\"\"|\n"
	"    ,'             `.     \\    /    \n"
	"   |     O           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"     ~           ~            ~        \n"
	"             ~       ~                 \n"
	"       ~       ~                       \n",
	
	"                                       \n"
	"                                       \n"
	"                                       \n"
	"               /\\o                    \n"
	"              /  |\\                   \n"
	"       _________/_\\       |\"\"\\/\"\"|\n"
	"    ,'             `.      \\    /      \n"
	"   |     O           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"       ~     ~      ~         ~        \n"
	"          ~          ~                 \n"
	"               ~          ~            \n",
	
	"                                       \n"
	"                                       \n"
	"                                       \n"
	"                _o                      \n"
	"               / |\\                    \n"
	"       _______/_/_\\      |\"\"\\/\"\"|\n"
	"    ,'             `.     \\    /       \n"
	"   |     U           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"             ~                ~        \n"
	"          ~          ~                 \n"
	"               ~                       \n",

	"                                       \n"
	"                                       \n"
	"                                       \n"
	"           . .  \\0/                    \n"
	"           .  .. |                      \n"
	"       ______:__/_\\       |\"\"\\/\"\"|\n"
	"    ,'             `.      \\    /      \n"
	"   |     U           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"             ~            ~            \n"
	"          ~          ~                 \n"
	"     ~                       ~         \n",
	
	"                                       \n"
	"                                       \n"
	"            o..\\0//                   \n"
	"           o . o|                      \n"
	"           ..  / \\                    \n"
	"       ______.______     |\"\"\\/\"\"|\n"
	"    ,'             `.     \\    /      \n"
	"   |     U           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"        ~                     ~        \n"
	"     ~               ~                 \n"
	"               ~                       \n",

	"          .  . \\o/                    \n"
	"        o   o . |                      \n"
	"          . . o/ \\                    \n"
	"        . :  .  o                      \n"
	"           .  ..                       \n"
	"       ______:______      |\"\"\\/\"\"|\n"
	"    ,'             `.      \\    /      \n"
	"   |     X           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"             ~           ~             \n"
	"          ~     ~                      \n"
	"                         ~             \n",

	"          .  .  / \\                   \n"
	"       o.   o . . o                    \n"
	"      o.   o  .   o                    \n"
	"        . .  .  .                      \n"
	"          .  .o                        \n"
	"       ______:______     |\"\"\\/\"\"|\n"
	"    ,'             `.      \\    /      \n"
	"   |     X           \\____/     |     \n"
	" ~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~     \n"
	"       ~     ~                ~        \n"
	"             ~       ~                 \n"
	"                    ~                  \n"
};

const size_t WHALE_NUM_FRAMES = sizeof(whale_frames) / sizeof(whale_frames[0]);