#include "animation.h"

const char *santore_frames[] = {
    "                __\n"
    "               / _\\ #\n"
    "               \\c /  #\n"
    "               / \\___ #\n"
    "               \\`----`#   ==>\n"
    "               |  \\  #\n"
    "    ,%%.-\"\"\"---'`--'\\#_\n"
    "   %%%%/             |__`\\\n"
    "  .%%'\\     |   \\   /  //\n"
    "  ,%%' >   .'----\\ |  [/ \n"
    "     < <<`       ||\n"
    "~~~~~~`\\\\\\~~~~~~~||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "        )\\\\\\      )\\    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

    "                __\n"
    "               / o\\ #\n"
    "               \\c /  #\n"
    "               / \\___ #\n"
    "               \\`----`#            ==>  \n"
    "               |  \\  #\n"
    "    ,%%.-\"\"\"---'`--'\\#_\n"
    "   %%%%/             |__`\\\n"
    "  .%%'\\     |   \\   /  //\n"
    "  ,%%' >   .'----\\ |  [/ \n"
    "     < <<`       ||\n"
    "~~~~~~`\\\\\\~~~~~~~||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "        )\\\\\\      )\\    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

    "                __\n"
    "               / o\\ #\n"
    "               \\C /  #\n"
    "               / \\___ #\n"
    "               \\`----`#                        ==>\n"
    "               |  \\  #\n"
    "    ,%%.-\"\"\"---'`--'\\#_\n"
    "   %%%%/             |__`\\\n"
    "  .%%'\\     |   \\   /  //\n"
    "  ,%%' >   .'----\\ |  [/ \n"
    "     < <<`       ||\n"
    "~~~~~~`\\\\\\~~~~~~~||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "        )\\\\\\      )\\    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

 	" 	                                                     \n"
    "                                                        \n"
    "                                                        \n"
    "              \\  O									 \n"
    "==>            \\/|\\									 \n"
	"  	       __/_\\_____								 \n"
    "              /   , .  ~ \\ 							 \n"
    "             /____________\\							 \n"
    "            /  ,       | . \\							 \n"
    "   ,     . /      |_  __||  \\							 \n"
    "  . __--  /  ~           |   \\						 \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "         \\/   ..      \\/    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

 	" 	                                                     \n"
    "                                                        \n"
    "                                                        \n"
    "                  O									 \n"
    "        ==>  __--/|\\									 \n"
	"   	       __/_\\_____								 \n"
    "              /   , .  ~ \\ 							 \n"
    "             /____________\\							 \n"
    "            /  ,       | . \\							 \n"
    "           /      |_  __||  \\							 \n"
    "          /  ~           |   \\						 \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "    __-- \\/   ..      \\/    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

 	" 	                                                     \n"
    "                                                        \n"
    "                                                        \n"
    "          . ,     o									 \n"
    "      .  ,      =/|\\									 \n"
	"   	, __-- __/_\\_____								 \n"
    "      .    ,  /   , .  ~ \\ 							 \n"
    "             /____________\\							 \n"
    "            /  ,       | . \\							 \n"
    "           /      |_  __||  \\							 \n"
    "          /  ~           |   \\						 \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "    __-- \\/   ..      \\/    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

	" 	                                                     \n"
    "                                                        \n"
    "                                                        \n"
    "                  o									 \n"
    "               \\/|\\									 \n"
	"  	       __/_\\_____								 \n"
    "    .   ,     /   , .  ~ \\ 							 \n"
    "  , __--     /____________\\							 \n"
    "        ,   /  ,       | . \\							 \n"
    "     .     /      |_  __||  \\							 \n"
    "          /  ~           |   \\						 \n"
    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
    "         \\/   ..      \\/    \\/   .     .. \\/  .     .\n"
	"\\/        ..__..--  . \\/           \\/          \\/  \n"
	"        .  \\/              \\/    .		\\/   .   . \n"
    ". \\/             .   \\/     .       \\/.       .     \n"
    "   __...--..__..__       .     \\/          .._..      \n"
    "\\/  .   .    \\/     \\/    __..--..     \\/      \\/ \n",

};

const size_t SANTORE_NUM_FRAMES = sizeof(santore_frames) / sizeof(santore_frames[0]);
