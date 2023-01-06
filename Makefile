SRC_C = ft_printf_utils_2.c ft_printf_utils.c ft_printf.c client.c
SRC_S = ft_printf_utils_2.c ft_printf_utils.c ft_printf.c server.c
SRC_C_B = ft_printf_utils_bonus_2.c ft_printf_utils_bonus.c ft_printf_bonus.c client_bonus.c
SRC_S_B = ft_printf_utils_bonus_2.c ft_printf_utils_bonus.c ft_printf_bonus.c server_bonus.c

OBJ_C = $(SRC_C:.c=.o)
OBJ_S = $(SRC_S:.c=.o)
OBJ_C_B = $(SRC_C_B:.c=.o)
OBJ_S_B = $(SRC_S_B:.c=.o)

CFLAGS = -Wall -Werror -Wextra
NAME_C = client
NAME_S = server
NAME_C_B = client_bonus
NAME_S_B = server_bonus

all: $(NAME_S) $(NAME_C) 

$(NAME_C): $(OBJ_C)
	cc $(CFLAGS) $(OBJ_C) -o $(NAME_C)
$(NAME_S): $(OBJ_S)
	cc $(CFLAGS) $(OBJ_S) -o $(NAME_S)

bonus : $(NAME_C_B) $(NAME_S_B)

$(NAME_C_B): $(OBJ_C_B)
	cc $(CFLAGS) $(OBJ_C_B) -o $(NAME_C_B)
$(NAME_S_B): $(OBJ_S_B)
	cc $(CFLAGS) $(OBJ_S_B) -o $(NAME_S_B)

clean:
	rm -rf $(OBJ_S) $(OBJ_C) $(OBJ_S_B) $(OBJ_C_B)

fclean: clean
	rm -rf $(NAME_S) $(NAME_C) $(NAME_S_B) $(NAME_C_B)

re: fclean all bonus