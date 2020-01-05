COMPILER = GCC

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

LIBFT = libft

HEADER = ft_printf.h

SRC = ./libft/print_color.c ./libft/digit_helpers.c ./libft/digit_printers.c ./libft/float_printer.c ./libft/ft_printf.c ./libft/helpers.c ./libft/parse_flags.c ./libft/string_helpers.c

OBJ = ./print_color.o ./digit_helpers.o ./digit_printers.o ./float_printer.o ./ft_printf.o ./helpers.o ./parse_flags.o ./string_helpers.o 

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
