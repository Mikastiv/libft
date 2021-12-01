# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 13:43:15 by mleblanc          #+#    #+#              #
#    Updated: 2021/12/01 06:41:21 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ		=	obj
SRC		=	src
INC		=	include
NAME	=	libft.a
CC		=	clang
LIBC	=	ar rcs
CFLAGS	=	-Wall -Werror -Wextra -Wpedantic -Wfloat-conversion -Wsign-conversion
RM		=	rm -rf
NM		=	norminette

STR_H		=	ft_string.h
HASH_H		=	ft_hmap.h

CHAR_C		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c\
				ft_isprint.c ft_isspace.c ft_isupper.c ft_tolower.c ft_toupper.c\
				ft_isblank.c ft_isgraph.c ft_isxdigit.c ft_ispunct.c
CONV_C		=	ft_atoi.c ft_atol.c ft_ltoa_base.c ft_ltoa.c ft_numlen.c ft_unumlen.c\
				ft_ultoa_base.c ft_ultoa.c
FILE_C		=	count_lines.c get_next_line.c read_to_str.c file_size.c
LIST_C		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstany.c ft_lstclear.c\
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c\
				ft_lstpop_front.c ft_lstsize.c ft_lstnext.c ft_lstall.c ft_lstcount_if.c
DLIST_C		=	ft_dlstadd_back.c ft_dlstadd_front.c ft_dlstclear.c	ft_dlstdelone.c\
				ft_dlstlast.c ft_dlstnew.c ft_dlstfirst.c ft_dlstsize.c ft_dlstnext.c\
				ft_dlstprev.c
MEM_C		=	ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
				ft_memcpy.c ft_memmove.c ft_memset.c ft_realloc.c
PUT_C		=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_base_fd.c ft_putnbr_fd.c\
				ft_putstr_fd.c ft_putwchar_fd.c ft_putwstr_fd.c ft_putunbr_base_fd.c
CSTR_C		=	ft_strarr_dup.c ft_strarr_free.c ft_split.c ft_strany.c ft_strcount_if.c ft_striter.c\
				ft_strarr_extend.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strall.c\
				ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnlen.c ft_strarr_replace.c\
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_wchar_size.c ft_strcmp.c\
				ft_wstr_size.c ft_wstrlen.c ft_wstrnlen.c ft_strarr_size.c ft_strarr_remove.c\
				ft_strarr_sort.c ft_strarr_last.c
BTREE_C		=	ft_btreeclear.c ft_btreedelone.c ft_btreenew.c
STR_C		=	ft_str_add_back.c ft_str_append_cstr.c ft_str_append.c ft_str_capacity.c ft_str_clear.c\
				ft_str_copy.c ft_str_copy_cstr.c ft_str_data.c ft_str_dup.c ft_str_dup_cstr.c ft_str_free.c\
				ft_str_len.c ft_str_new.c ft_str_sub.c ft_str_sub_cstr.c ft_str_trim.c ft_str_trim_cstr.c\
				ft_str_take.c ft_str_new_copy.c ft_str_cmp.c ft_str_cmp_cstr.c
HASH_C		=	ft_hash.c ft_hash_combine.c ft_hmap_new.c ft_hmap_free.c ft_hmap_insert.c\
				ft_hmap_find.c ft_hmap_size.c get_hmap_buckets.c ft_hmap_remove.c delete_pair.c\
				get_hmap_index.c create_pair.c ft_hmap_insert_del.c
MATH_C		=	vec2_add.c vec2_sub.c vec2_mul.c deg_to_rad.c rad_to_deg.c vec2_length.c vec2_unit.c\
				wrap_angle.c vec2_normalize.c vec2_dist.c ft_abs.c ft_labs.c ft_clamp.c ft_clampd.c
TIME_C		=	ft_gettime.c ft_timediff.c

CHAR_DIR	=	$(SRC)/ft_char
CONV_DIR	=	$(SRC)/ft_convert
FILE_DIR	=	$(SRC)/ft_file
LIST_DIR	=	$(SRC)/ft_list
DLIST_DIR	=	$(SRC)/ft_dlist
MEM_DIR		=	$(SRC)/ft_memory
PUT_DIR		=	$(SRC)/ft_put
CSTR_DIR	=	$(SRC)/ft_cstr
BTREE_DIR	=	$(SRC)/ft_btree
STR_DIR		=	$(SRC)/ft_string
HASH_DIR	=	$(SRC)/ft_hash
MATH_DIR	=	$(SRC)/ft_math
TIME_DIR	=	$(SRC)/ft_time

CHAR_SRC	=	$(addprefix $(CHAR_DIR)/, $(CHAR_C))
CONV_SRC	=	$(addprefix $(CONV_DIR)/, $(CONV_C))
FILE_SRC	=	$(addprefix $(FILE_DIR)/, $(FILE_C))
LIST_SRC	=	$(addprefix $(LIST_DIR)/, $(LIST_C))
DLIST_SRC	=	$(addprefix $(DLIST_DIR)/, $(DLIST_C))
MEM_SRC		=	$(addprefix $(MEM_DIR)/, $(MEM_C))
PUT_SRC		=	$(addprefix $(PUT_DIR)/, $(PUT_C))
CSTR_SRC	=	$(addprefix $(CSTR_DIR)/, $(CSTR_C))
BTREE_SRC	=	$(addprefix $(BTREE_DIR)/, $(BTREE_C))
STR_SRC		=	$(addprefix $(STR_DIR)/, $(STR_C))
HASH_SRC	=	$(addprefix $(HASH_DIR)/, $(HASH_C))
MATH_SRC	=	$(addprefix $(MATH_DIR)/, $(MATH_C))
TIME_SRC	=	$(addprefix $(TIME_DIR)/, $(TIME_C))

STR_INCS	=	$(addprefix $(INC)/, $(STR_H))
HASH_INCS	=	$(addprefix $(INC)/, $(HASH_H))

OFILES	=	$(CHAR_C:.c=.o) $(CONV_C:.c=.o) $(FILE_C:.c=.o) $(LIST_C:.c=.o)\
			$(MEM_C:.c=.o) $(PUT_C:.c=.o) $(CSTR_C:.c=.o) $(BTREE_C:.c=.o)\
			$(STR_C:.c=.o) $(DLIST_C:.c=.o) $(HASH_C:.c=.o) $(MATH_C:.c=.o)\
			$(TIME_C:.c=.o)
HFILES	=	$(STR_H) $(HASH_H)

HEADERS	=	$(addprefix $(INC)/, $(HFILES))
OBJS	=	$(addprefix $(OBJ)/, $(OFILES))
SRCS	=	$(CHAR_SRC) $(CONV_SRC) $(FILE_SRC) $(LIST_SRC) $(MEM_SRC) $(PUT_SRC)\
			$(CSTR_SRC) $(BTREE_SRC) $(STR_SRC) $(DLIST_SRC) $(HASH_SRC) $(MATH_SRC)\
			$(TIME_SRC)
INCS	=	$(STR_INCS) $(HASH_INCS)

VPATH	=	$(CHAR_DIR) $(CONV_DIR) $(FILE_DIR) $(LIST_DIR) $(MEM_DIR) $(PUT_DIR)\
			$(CSTR_DIR) $(BTREE_DIR) $(STR_DIR) $(DLIST_DIR) $(HASH_DIR) $(MATH_DIR)\
			$(TIME_DIR)

$(OBJ)/%.o:	%.c
			$(CC) $(CFLAGS) -c -I. -I$(INC) $< -o $@

all:		CFLAGS += -O2 -DNDEBUG
all:		$(NAME)

$(NAME):	$(OBJ) $(OBJS)
			$(LIBC) $(NAME) $(OBJS)

$(OBJ):
			@mkdir -p $(OBJ)

norme:
			@$(NM) libft.h $(INCS) $(SRCS) $(HEADERS)

debug:		CFLAGS += -g
debug:		$(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re norme debug
