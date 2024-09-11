#include "game.h"

const char *bee_frames[] = {
    "                                         \n"
    "                                        |\n"
    "                                     \\ |\n"
    "                                     (\")\n"
    "                                        (\n"
    "                                         \n"
    "                                         \n"
    "                                         \n"
    "                                \\_o_/   \n"
    "                                   )     \n"
    "                                  /\\__  \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\~~~~~~\n"
    "  \\/..__..--  .    \\/     .  \\/  .  ..\n"
    "\\/         \\/ \\/    \\/     .      .--\n"
    "        .  \\/              \\/    .  \\/\n"
    ". \\/             .   \\/     .     . ..-\n"
    "   __...--..__..__       .     \\/    .  \n"
    "\\/  .   .    \\/     \\/    __..--..   .\n",

	"                                  _  _   \n"
    "                                 | )/ )  \n"
    "                              \\ |//,' __\n"
    "                              (\")(_)-\"(\n"
    "                                 (\\     \n"
    "                                         \n"
    "                                         \n"
    "                                         \n"
    "                      \\_o_              \n"
    "                         ) \\            \n"
    "                      __/\\              \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~\\~~~~~~~~~~~~\n"
    "  \\/..__..--  .    \\/     .  \\/  .  ..\n"
    "\\/         \\/ \\/    \\/     .      .--\n"
    "        .  \\/              \\/    .  \\/\n"
    ". \\/             .   \\/     .     . ..-\n"
    "   __...--..__..__       .     \\/    .  \n"
    "\\/  .   .    \\/     \\/    __..--..   .\n",

	"                          _  _           \n"
    "                         | )/ )          \n"
    "                      \\ |//,' __        \n"
    "                      (\")(_)-\"()))=-   \n"
    "                         (\\             \n"
    "                                      _  \n"
    "                                     ( | \n"
    "                                   \\ \\|\n"
    "              \\_o_/                (\")(\n"
    "                 )                    <\\\n"
    "                /\\__                    \n"
    "~~~~~~~~~~~~~~~\\~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "  \\/..__..--  .    \\/     .  \\/  .  ..\n"
    "\\/         \\/ \\/    \\/     .      .--\n"
    "        .  \\/              \\/    .  \\/\n"
    ". \\/             .   \\/     .     . ..-\n"
    "   __...--..__..__       .     \\/    .  \n"
    "\\/  .   .    \\/     \\/    __..--..   .\n",

	    "                 _  _                \n"
    "                | )/ )                   \n"
    "             \\ |//,' __                 \n"
    "             (\")(_)-\"()))=-            \n"
    "                (\\                      \n"
    "                             _   _       \n"
    "                            ( | / )      \n"
    "                          \\ \\|/,' __   \n"
    "    \\_o_                (\")(_)-\"()))=-\n"
    "       ) \\                    <\\       \n"
    "      /\\__                              \n"
    "~~~~~~\\~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "  \\/..__..--  .    \\/     .  \\/  .  ..\n"
    "\\/         \\/ \\/    \\/     .      .--\n"
    "        .  \\/              \\/    .  \\/\n"
    ". \\/             .   \\/     .     . ..-\n"
    "   __...--..__..__       .     \\/    .  \n"
    "\\/  .   .    \\/     \\/    __..--..   .\n",

	"                 _  _                    \n"
    "         | )/ )                          \n"
    "      \\ |//,' __                        \n"
    "      (\")(_)-\"()))=-                   \n"
    "         (\\                             \n"
    "                      _   _              \n"
    "                     ( | / )             \n"
    "                   \\ \\|/,' __          \n"
    "o_/                 (\")(_)-\"()))=-     \n"
    ")                     <\\                \n"
    "\\__                                     \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "  \\/..__..--  .    \\/     .  \\/  .  ..\n"
    "\\/         \\/ \\/    \\/     .      .--\n"
    "        .  \\/              \\/    .  \\/\n"
    ". \\/             .   \\/     .     . ..-\n"
    "   __...--..__..__       .     \\/    .  \n"
    "\\/  .   .    \\/     \\/    __..--..   .\n"
};

const size_t BEE_NUM_FRAMES = sizeof(bee_frames) / sizeof(bee_frames[0]);
