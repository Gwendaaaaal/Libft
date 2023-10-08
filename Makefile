NAME = libft.a 

HEADER = libft.h

SOURCES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

ARFLAGS = -rcs

RMFLAGS = -rf 

all : $(NAME)

$(NAME) : $(OBJECTS) $(HEADER)
	ar $(ARFLAGS) $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm $(RMFLAGS) $(OBJECTS)

fclean : clean
	rm $(RMFLAGS) $(NAME)

re : fclean all

.PHONY = all, clean, fclean, re
