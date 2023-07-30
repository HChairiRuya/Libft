NAME = libft.a

SRC = ft_isalnum.c \
    ft_isprint.c \
    ft_isalpha.c \
    ft_strlen.c \
    ft_isdigit.c \
    ft_isascii.c \
    ft_memset.c \
    ft_bzero.c \
    ft_memcpy.c \
    ft_strlcpy.c \
    ft_strlcat.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_strncmp.c \
    ft_memcmp.c \
    ft_memchr.c \
    ft_strnstr.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_strtrim.c \
    ft_atoi.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_split.c \
    ft_itoa.c \
    ft_memmove.c \
    ft_putnbr_fd.c \
    ft_lst.c \
    ft_lstadd.c 

OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) $() -c $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
