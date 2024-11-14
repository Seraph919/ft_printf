SRC = ft_putstr_fd.c unsigned.c formats.c ft_putchar_fd.c p_hexa.c upper_hexa.c ft_printf.c ft_putnbr_fd.c p_memory.c
OBJ = $(SRC:.c=.o)
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(?)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : clean fclean