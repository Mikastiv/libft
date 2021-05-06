OBJS	=	ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o $\
			ft_memchr.o ft_memcmp.o ft_strlen.o ft_isalpha.o ft_isdigit.o $\
			ft_isalnum.o ft_isascii.o ft_isprint.o ft_isupper.o ft_islower.o $\
			ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o $\
			ft_strlcpy.o ft_strnlen.o ft_strlcat.o ft_strnstr.o ft_isspace.o $\
			ft_atoi.o ft_strdup.o
NAME	=	libft.a
CC		=	clang
LIBC	=	ar rcs
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re