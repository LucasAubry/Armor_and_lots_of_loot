#-----------------------Flags_and_Name---------------------
NAME	=	loot_armor
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -pthread -Iinclude -g
CREAD	=	-lreadline -lncursesw

#-L/opt/homebrew/lib 
#------------------------Source-----------------------------

# Sources and objects
FILES = main \
		consummable \
		profil/profil \
		profil/touch_stats_profil \
		profil/fusion \
		print/print_profil \
		fight/fight \
		fight/monster \
		shop \
		shop_buying \
		library \
		item/item \
		item/item_attack \
		item/item_armor \
		item/item_heal \
		item/item_hp \
		init_all \
		save \
		print/print \
		print/print_monster \
		print/print_start \
		print/print_choice \
		print/print_you_die \
		print/print_shop \
		print/choice \
		print/print_chest \
		print/print_library \
		animations/santore_animations \
        animations/whale_animations \
        animations/bee_animations \
		animations/loose_animations \
		animations/win_animations \
		animations/cactus_animations \
		animations/spider_animations \
		free_all \
		fight/chest \
		fight/new_fight \
		fight/frames_background/dongon \
		fight/frames_background/desert \
		fight/frames_background/ocean \
		selection/selection \
		selection/selection_with_variable \
		selection/selection_position \
		tools


SRCS = $(addprefix src/, $(addsuffix .c, $(FILES)))
OBJS = $(addprefix obj/, $(addsuffix .o, $(FILES)))

#------------------------Colors-----------------------------

define generate_random_color
python3 -c "import random; \
print(''.join(['\033[38;5;' + str(random.randint(16, 255)) + 'm' + c + '\033[0m' for c in '$(1)']))"
endef

#------------------------Rules------------------------------

all:	${NAME}

obj:
	mkdir -p obj
	mkdir -p obj/print
	mkdir -p obj/animations
	mkdir -p obj/fight
	mkdir -p obj/fight/frames_background
	mkdir -p obj/item
	mkdir -p obj/profil
	mkdir -p obj/selection

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(CREAD)

$(NAME): obj ${OBJS}
		@$(call generate_random_color, $(CC) $(CFLAGS) -o $@ $(OBJS))
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(CREAD)


obj/%.o: src/%.c
	@$(call generate_random_color, $(CC) $(CFLAGS) -c $< -o $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}
		rm -rf obj
	#	rm -f lib/libft.a
	#	make clean -C lib

re:	fclean all

.PHONY: all clean fclean re
