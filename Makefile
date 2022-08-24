NAME =		duty

CC =		gcc

CFLAGS = 	-g3

SRCS =		srcs/main.c srcs/duty.c

INCLUDES =	includes

OBJS =		$(SRCS:.c=.o)

LIBDIR = libs

UNAME = $(shell uname -p)
ifeq ($(UNAME), arm)
	LIBNAME = m1prepare
else
	LIBNAME = iprepare
endif


all :		$(NAME)

.c.o :
		$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDES)

$(NAME) : 	$(OBJS)
			$(CC) $(CFLAGS) -I$(INCLUDES) -L$(LIBDIR) -l$(LIBNAME) $(OBJS) -o $@

clean :
			rm -f $(OBJS)

fclean : 	clean
			rm -f $(NAME)

re :		fclean all