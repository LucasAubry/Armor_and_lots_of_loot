#-----------------------Flags_and_Name---------------------
NAME	=	loot_armor
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -pthread -Iinclude -g
CREAD	=	-lreadline

#-L/opt/homebrew/lib 
#------------------------Source-----------------------------

# Sources and objects
FILES = main \
		fight \
		shop \
		save \
		print/print \
		print/print_monster \
		print/print_start \
		print/print_choice \
		animations/santore_animations \
        animations/crab_animations \
        animations/ours_animations


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
