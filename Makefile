NAME =		duty

CC =		gcc

CFLAGS = 	-g

SRCS =		main.c duty.c

OBJS =		$(SRCS:.c=.o)

SHELL = bash
UNAME = $(SHELL uname -p)
ifeq ($(UNAME), arm)
	LIBNAME = m1prepare
else
	LIBNAME = iprepare
endif


all :		$(NAME)

$(NAME) : 	$(OBJS)
			$(CC) $(CFLAGS) -L./ -l$(LIBNAME) $(OBJS) -o $@

clean :
			rm -f $(OBJS)

fclean : 	clean
			rm -f $(NAME)

re :		fclean all