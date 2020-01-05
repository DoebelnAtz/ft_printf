COMPILER = GCC

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

LIBFT = libft

HEADER = ft_printf.h

SRC = ./print_color.c ./digit_helpers.c ./digit_printers.c ./float_printer.c ./ft_printf.c helpers.c ./parse_flags.c ./string_helpers.c

OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	@$(COMPILER) -c $(FLAGS) $(SRC)

test:
	@ $(COMPILER) main.c $(NAME) -Wno-format
	@./a.out 1 2 > output
	@cat output | sed 's/ft:..//g' | tail -n72 > printfout
	@cat output | sed 's/ft:..//g' | head -n73 | tail -n72 | cut -c -22 > ftout
	diff printfout ftout

norme:
	@norminette ./libft/
	@norminette $(HEADER)
	@norminette $(SRC)

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

debug:
	@gcc *.c libft/libft.a -g

.PHONY: clean fclean all re