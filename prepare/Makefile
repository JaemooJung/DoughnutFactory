NAME =		libprepare.a

CC =		gcc

CFLAGS = 	-g

SRCS =		prepare.c

OBJS =		$(SRCS:.c=.o)

all :		$(NAME)

$(NAME) : 	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean :
			rm -f $(OBJS)

fclean : 	clean
			rm -f $(NAME)

re :		fclean all