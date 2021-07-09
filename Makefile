# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 13:43:15 by mleblanc          #+#    #+#              #
#    Updated: 2021/07/09 12:14:08 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	src
INC		=	includes
OBJ		=	obj
HFILES	=	convert.h do_printf.h flags.h utils.h
CFILES	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c\
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_isupper.c ft_islower.c\
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
			ft_strlcpy.c ft_strnlen.c ft_strlcat.c ft_strnstr.c ft_isspace.c\
			ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c\
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c\
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa_base.c\
			ft_utoa_base.c ft_utoa.c ft_ptoa_base.c ft_ptoa.c ft_ltoa.c\
			ft_ltoa_base.c ft_ultoa_base.c ft_ultoa.c ft_wstrlen.c\
			ft_wstrnlen.c ft_wchar_size.c ft_putwchar_fd.c ft_putwstr_fd.c\
			ft_wstr_size.c ft_lltoa_base.c ft_lltoa.c ft_ulltoa_base.c\
			ft_ulltoa.c ft_putnbr_base_fd.c ft_putunbr_base_fd.c ft_numlen.c\
			ft_unumlen.c ft_ntoa_base.c ft_ntoa.c ft_untoa.c ft_ftoa.c\
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			ft_lstmap.c get_next_line.c ft_float_len.c ft_untoa_base.c\
			ft_free.c count_lines.c ft_str_any.c ft_str_foreach.c\
			ft_str_count_if.c ft_atol.c ft_lstany.c ft_printf.c do_printf.c\
			convert.c convert_char.c convert_str.c utils.c convert_ptr.c\
			convert_percent.c convert_int.c convert_uint.c convert_num_utils.c\
			convert_n.c convert_float.c
OFILES	=	$(CFILES:.c=.o)
HEADERS	=	$(addprefix $(INC)/, $(HFILES))
SRCS	=	$(addprefix $(SRC)/, $(CFILES))
OBJS	=	$(addprefix $(OBJ)/, $(OFILES))
NAME	=	libft.a
CC		=	clang
LIBC	=	ar rcs
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

$(OBJ)/%.o:	$(SRC)/%.c
			$(CC) $(CFLAGS) -I$(INC) -I. -c $< -o $@

$(NAME):	$(OBJ) $(OBJS)
			$(LIBC) $(NAME) $(OBJS)

$(OBJ):
			@mkdir -p $(OBJ)

norme:
			norminette $(SRCS) $(HEADERS) libft.h

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re norme