/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:39:54 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/27 21:19:54 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <wchar.h>
# include <stdbool.h>
# include <unistd.h>

# define WHITESPACE " \t\n\v\f\r"

/*
** ANSI Colors
*/

# define FT_RST "\033[m"

# define FT_BLA "\033[30m"
# define FT_RED "\033[31m"
# define FT_GRE "\033[32m"
# define FT_YEL "\033[33m"
# define FT_BLU "\033[34m"
# define FT_MAG "\033[35m"
# define FT_CYA "\033[36m"
# define FT_WHI "\033[37m"

# define FT_BBLA "\033[90m"
# define FT_BRED "\033[91m"
# define FT_BGRE "\033[92m"
# define FT_BYEL "\033[93m"
# define FT_BBLU "\033[94m"
# define FT_BMAG "\033[95m"
# define FT_BCYA "\033[96m"
# define FT_BWHI "\033[97m"

/*
** Memory functions
*/

void		*ft_calloc(size_t count, size_t size);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** Character classification and convertion functions
*/

bool		ft_isupper(char c);
bool		ft_islower(char c);
bool		ft_isalpha(char c);
bool		ft_isdigit(char c);
bool		ft_isxdigit(char c);
bool		ft_isalnum(char c);
bool		ft_isascii(char c);
bool		ft_isspace(char c);
bool		ft_isblank(char c);
bool		ft_isgraph(char c);
bool		ft_isprint(char c);
bool		ft_ispunct(char c);
char		ft_toupper(char c);
char		ft_tolower(char c);

/*
** Conversion functions
*/

int			ft_atoi(const char *str);
long		ft_atol(const char *str);
void		ft_ntoa_base(char *b, long long n, size_t len, const char *base);
void		ft_ntoa(char *b, long long n, size_t len);
void		ft_untoa_base(char *b, unsigned long long n,
				size_t len, const char *base);
void		ft_untoa(char *b, unsigned long long n, size_t len);
char		*ft_itoa(int n);
char		*ft_itoa_base(int n, const char *base);
char		*ft_utoa(unsigned int n);
char		*ft_utoa_base(unsigned int n, const char *base);
char		*ft_ltoa(long n);
char		*ft_ltoa_base(long n, const char *base);
char		*ft_ultoa(unsigned long n);
char		*ft_ultoa_base(unsigned long n, const char *base);
char		*ft_lltoa(long long n);
char		*ft_lltoa_base(long long n, const char *base);
char		*ft_ulltoa(unsigned long long n);
char		*ft_ulltoa_base(unsigned long long n, const char *base);
char		*ft_ptoa(void *ptr);
char		*ft_ptoa_base(void *ptr, const char *base);
char		*ft_ftoa(double n, int precision);
size_t		ft_numlen(long long n, long long radix);
size_t		ft_unumlen(unsigned long long n, unsigned long long radix);
size_t		ft_float_len(double n, int precision);

/*
** C-string functions
*/

size_t		ft_strlen(const char *s);
size_t		ft_strnlen(const char *s, size_t maxlen);
size_t		ft_wchar_size(wint_t c);
size_t		ft_wstr_size(const wchar_t *s);
size_t		ft_wstrlen(const wchar_t *s);
size_t		ft_wstrnlen(const wchar_t *s, size_t maxlen);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		**ft_split(const char *s, char delim);
char		**ft_strarr_dup(char **arr);
char		**ft_strarr_extend(char **arr, char *back_str);
size_t		ft_strarr_size(char **arr);
void		ft_strarr_replace(char **arr, char *new, size_t index);
void		ft_strarr_remove(char **arr, size_t index);
void		ft_strarr_free(char **arr);
bool		ft_strany(const char *s, bool (*f)(char));
bool		ft_strall(const char *s, bool (*f)(char));
void		ft_striter(char *s, void (*f)(char));
size_t		ft_strcount_if(const char *s, bool (*f)(char));

/*
** Output functions
*/

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putwchar_fd(wint_t c, int fd);
void		ft_putwstr_fd(const wchar_t *s, int fd);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putnbr_base_fd(long long n, const char *base, int fd);
void		ft_putunbr_base_fd(unsigned long long n, const char *base, int fd);

/*
** Linked list functions
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnext(t_list **lst);
void		*ft_lstpop_front(t_list **lst);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
bool		ft_lstany(t_list *lst, bool (*f)(void *));
bool		ft_lstall(t_list *lst, bool (*f)(void *));
int			ft_lstsize(t_list *lst);

/*
** Doubly linked list functions
*/

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}	t_dlist;

t_dlist		*ft_dlstnew(void *content);
t_dlist		*ft_dlstfirst(t_dlist *lst);
t_dlist		*ft_dlstlast(t_dlist *lst);
t_dlist		*ft_dlstnext(t_dlist **lst);
t_dlist		*ft_dlstprev(t_dlist **lst);
void		ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void		ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void		ft_dlstdelone(t_dlist *lst, void (*del)(void *));
void		ft_dlstclear(t_dlist **lst, void (*del)(void *));
int			ft_dlstsize(t_dlist *lst);

/*
** Binary tree functions
*/

typedef struct s_btree
{
	void			*content;
	struct s_btree	*left;
	struct s_btree	*right;
}	t_btree;

t_btree		*ft_btreenew(void *content);
void		ft_btreedelone(t_btree *tree, void (*del)(void *));
void		ft_btreeclear(t_btree **tree, void (*del)(void *));

/*
** File functions
*/

int			get_next_line(int fd, char **line);
char		*read_to_str(int fd);
ssize_t		count_lines(const char *file);
ssize_t		file_size(const char *file);

/*
** Custom printf
*/

int			ft_printf(const char *format, ...);

/*
** String functions
*/

typedef void	*t_string;

t_string	ft_str_new(char *cstr);
t_string	ft_str_new_copy(const char *cstr);
t_string	ft_str_add_back(t_string str, char c);
t_string	ft_str_append(t_string dst, const t_string src);
t_string	ft_str_append_cstr(t_string dst, const char *src);
t_string	ft_str_copy(t_string dst, const t_string src);
t_string	ft_str_copy_cstr(t_string dst, const char *src);
t_string	ft_str_dup(const t_string str);
t_string	ft_str_dup_cstr(const char *str);
t_string	ft_str_sub(t_string str, unsigned int index, size_t len);
t_string	ft_str_sub_cstr(const char *str, unsigned int index, size_t len);
t_string	ft_str_trim(const t_string str, const char *set);
t_string	ft_str_trim_cstr(const char *str, const char *set);
t_string	ft_str_clear(t_string str);
int			ft_str_cmp(const t_string s1, const t_string s2, size_t n);
int			ft_str_cmp_cstr(const t_string s1, const char *s2, size_t n);
size_t		ft_str_len(t_string str);
size_t		ft_str_capacity(t_string str);
void		ft_str_free(t_string str);
char		*ft_str_data(t_string str);
char		*ft_str_take(t_string str);

#endif
