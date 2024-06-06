NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTPATH = ./libft

SRCS = 	ft_printf.c		\
	ft_printchar.c		\
	ft_printpercent.c	\
	ft_printstr.c		\
	ft_printptr.c		\
	ft_printnbr.c		\
	ft_printunsigned.c	\
	ft_printhexa.c		\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTPATH)
	@cp $(LIBFTPATH)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -rs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTPATH) && make clean

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTPATH) && make fclean

re: fclean all

.PHONY: all clean fclean re libft

