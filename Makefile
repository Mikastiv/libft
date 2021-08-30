# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 13:43:15 by mleblanc          #+#    #+#              #
#    Updated: 2021/08/30 16:53:19 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ		=	obj
SRC		=	src
INC		=	include
NAME	=	libft.a
CC		=	clang
LIBC	=	ar rcs
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf
NM		=	norminette

CHAR_DIR	=	$(SRC)/ft_char
CHAR_C		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c\
				ft_isprint.c ft_isspace.c ft_isupper.c ft_tolower.c ft_toupper.c
CHAR_SRC	=	$(addprefix $(CHAR_DIR)/, $(CHAR_C))

CONV_DIR	=	$(SRC)/ft_convert
CONV_C		=	ft_atoi.c ft_atol.c ft_float_len.c ft_ftoa.c ft_itoa_base.c\
				ft_itoa.c ft_lltoa_base.c ft_lltoa.c ft_ltoa_base.c ft_ltoa.c\
				ft_ntoa_base.c ft_ntoa.c ft_numlen.c ft_ptoa_base.c ft_ptoa.c\
				ft_ulltoa_base.c ft_ulltoa.c ft_ultoa_base.c ft_ultoa.c\
				ft_untoa_base.c ft_untoa.c ft_unumlen.c ft_utoa_base.c ft_utoa.c
CONV_SRC	=	$(addprefix $(CONV_DIR)/, $(CONV_C))

FILE_DIR	=	$(SRC)/ft_file
FILE_C		=	count_lines.c get_next_line.c
FILE_SRC	=	$(addprefix $(FILE_DIR)/, $(FILE_C))

LIST_DIR	=	$(SRC)/ft_list
LIST_C		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstany.c ft_lstclear.c\
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c\
				ft_lstpop_front.c ft_lstsize.c
LIST_SRC	=	$(addprefix $(LIST_DIR)/, $(LIST_C))

DLIST_DIR	=	$(SRC)/ft_dlist
DLIST_C		=	ft_dlstadd_back.c ft_dlstadd_front.c ft_dlstclear.c	ft_dlstdelone.c\
				ft_dlstlast.c ft_dlstnew.c ft_dlstfirst.c ft_dlstsize.c
DLIST_SRC	=	$(addprefix $(DLIST_DIR)/, $(DLIST_C))

MEM_DIR		=	$(SRC)/ft_memory
MEM_C		=	ft_bzero.c ft_calloc.c ft_free.c ft_memccpy.c ft_memchr.c\
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
MEM_SRC		=	$(addprefix $(MEM_DIR)/, $(MEM_C))

PRINT_DIR	=	$(SRC)/ft_printf
PRINT_H		=	convert.h do_printf.h flags.h utils.h
PRINT_C		=	convert_char.c convert_float.c convert_int.c convert_n.c\
				convert_num_utils.c convert_percent.c convert_ptr.c convert_str.c\
				convert_uint.c convert.c do_printf.c ft_printf.c utils.c
PRINT_SRC	=	$(addprefix $(PRINT_DIR)/, $(PRINT_C))
PRINT_INCS	=	$(addprefix $(INC)/, $(PRINT_H))

PUT_DIR		=	$(SRC)/ft_put
PUT_C		=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_base_fd.c ft_putnbr_fd.c\
				ft_putstr_fd.c ft_putunbr_base_fd.c ft_putwchar_fd.c\
				ft_putwstr_fd.c
PUT_SRC		=	$(addprefix $(PUT_DIR)/, $(PUT_C))

CSTR_DIR	=	$(SRC)/ft_cstr
CSTR_C		=	ft_dup_strarr.c ft_free_strarr.c ft_split.c ft_strany.c ft_strcount_if.c ft_strforeach.c\
				ft_expand_strarr.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strjoin_free.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnlen.c\
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_wchar_size.c\
				ft_wstr_size.c ft_wstrlen.c ft_wstrnlen.c
CSTR_SRC	=	$(addprefix $(CSTR_DIR)/, $(CSTR_C))

TREE_DIR	=	$(SRC)/ft_tree
TREE_C		=	ft_treeclear.c ft_treedelone.c ft_treenew.c
TREE_SRC	=	$(addprefix $(TREE_DIR)/, $(TREE_C))

STR_DIR		=	$(SRC)/ft_string
STR_H		=	ft_string.h
STR_C		=	ft_str_add_back.c ft_str_append_cstr.c ft_str_append.c ft_str_capacity.c ft_str_clear.c\
				ft_str_copy.c ft_str_copy_cstr.c ft_str_data.c ft_str_dup.c ft_str_dup_cstr.c ft_str_free.c\
				ft_str_len.c ft_str_new.c ft_str_sub.c ft_str_sub_cstr.c ft_str_trim.c ft_str_trim_cstr.c
STR_SRC		=	$(addprefix $(STR_DIR)/, $(STR_C))
STR_INCS	=	$(addprefix $(INC)/, $(STR_H))

OFILES	=	$(CHAR_C:.c=.o) $(CONV_C:.c=.o) $(FILE_C:.c=.o) $(LIST_C:.c=.o)\
			$(MEM_C:.c=.o) $(PRINT_C:.c=.o) $(PUT_C:.c=.o) $(CSTR_C:.c=.o)\
			$(TREE_C:.c=.o) $(STR_C:.c=.o) $(DLIST_C:.c=.o)
OBJS	=	$(addprefix $(OBJ)/, $(OFILES))
SRCS	=	$(CHAR_SRC) $(CONV_SRC) $(FILE_SRC) $(LIST_SRC) $(MEM_SRC) $(PRINT_SRC) $(PUT_SRC) $(CSTR_SRC) $(TREE_SRC) $(STR_SRC) $(DLIST_SRC)
INCS	=	$(PRINT_INCS) $(STR_INCS)

VPATH	=	$(CHAR_DIR) $(CONV_DIR) $(FILE_DIR) $(LIST_DIR) $(MEM_DIR) $(PRINT_DIR) $(PUT_DIR) $(CSTR_DIR) $(TREE_DIR) $(STR_DIR) $(DLIST_DIR)

$(OBJ)/%.o:	%.c
			$(CC) $(CFLAGS) -c -I. -I$(INC) $< -o $@

$(NAME):	$(OBJ) $(OBJS)
			$(LIBC) $(NAME) $(OBJS)

$(OBJ):
			@mkdir -p $(OBJ)

norme:
			$(NM) libft.h $(INCS) $(SRCS) | grep "Error[:!]"

all:		$(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re norme