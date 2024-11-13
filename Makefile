SRC = ft_printf.c formats.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c p_memory.c unsigned.c upper_hexa.c p_hexa.c upper_hexa.c
AR = ar rcs
NAME = libftprintf.a
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all :  $(NAME)

$(NAME) : $(OBJ)
  $(AR) $(NAME) $(?)
clean :
  rm -f $(OBJ)
fclean : clean
  rm -f $(NAME)

re : fclean all

.PHONY : clean fclean
