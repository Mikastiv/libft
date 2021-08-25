/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:39:54 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/24 14:13:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <wchar.h>
# include <stdbool.h>

# define WHITESPACE " \t\n\v\f\r"

void		*ft_calloc(size_t count, size_t size);
void		*ft_free(void *ptr);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isspace(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

int			ft_atoi(const char *str);
long		ft_atol(const char *str);
void		ft_ntoa_base(char *b, long n, size_t len, const char *base);
void		ft_ntoa(char *b, long n, size_t len);
void		ft_untoa_base(char *b, unsigned long n,
				size_t len, const char *base);
void		ft_untoa(char *b, unsigned long n, size_t len);
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
size_t		ft_numlen(long n, long radix);
size_t		ft_unumlen(unsigned long n, unsigned long radix);
size_t		ft_float_len(double n, int precision);

size_t		ft_strlen(const char *s);
size_t		ft_strnlen(const char *s, size_t maxlen);
size_t		ft_wchar_size(wint_t c);
size_t		ft_wstr_size(const wchar_t *s);
size_t		ft_wstrlen(const wchar_t *s);
size_t		ft_wstrnlen(const wchar_t *s, size_t maxlen);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strjoin_free(char *s1, char *s2);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		**ft_split(const char *s, char c);
char		**ft_dup_strarr(char **arr);
void		ft_free_strarr(char **arr);
bool		ft_str_any(const char *s, bool(*f)(char));
void		ft_str_foreach(char *s, void(*f)(char));
size_t		ft_str_count_if(const char *s, bool(*f)(char));

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putwchar_fd(wint_t c, int fd);
void		ft_putwstr_fd(const wchar_t *s, int fd);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putnbr_base_fd(long long n, const char *base, int fd);
void		ft_putunbr_base_fd(unsigned long long n, const char *base, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstpop_front(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
bool		ft_lstany(t_list *lst, bool (*f)(void *));
int			ft_lstsize(t_list *lst);

typedef struct s_tree
{
	void			*content;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;

t_tree		*ft_treenew(void *content);
void		ft_treedelone(t_tree *tree, void (*del)(void *));
void		ft_treeclear(t_tree **tree, void (*del)(void *));

int			get_next_line(int fd, char **line);
int			count_lines(char *file);

int			ft_printf(const char *format, ...);

typedef void	*t_string;

t_string	ft_strnew(char *cstr);
t_string	ft_stradd_back(t_string str, char c);
t_string	ft_strappend(t_string dst, const t_string src);
t_string	ft_strappend_cstr(t_string dst, const char *src);
t_string	ft_strcopy(t_string dst, const t_string src);
t_string	ft_strduplicate(const t_string str);
size_t		ft_strlength(t_string str);
size_t		ft_strcapacity(t_string str);
void		ft_strfree(t_string str);
char		*ft_strdata(t_string str);

#endif
