CC =        gcc

CFLAGS =    -g

SRCS =      prepare.c

OBJS =      $(SRCS:.c=.o)

UNAME = $(shell uname -p)

ifeq ($(UNAME), arm)
    NAME = libm1prepare.dylib
else
    NAME = libiprepare.a
endif

all :       $(NAME)

$(NAME) :   $(OBJS)
            ar rc $(NAME) $(OBJS)
            ranlib $(NAME)

clean :
            rm -f $(OBJS)

fclean :    clean
            rm -f $(NAME)
			
re :        fclean all