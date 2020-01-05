/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:05:50 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:11:25 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <wchar.h>

/*
** BIT FLAGS
*/

# define HASH			(1 << 0)
# define PLUS			(1 << 1)
# define SPACE			(1 << 2)
# define MINUS			(1 << 3)
# define ZERO			(1 << 4)
# define CENTER			(1 << 5)
# define WILDCARD		(1 << 6)
# define DOUBLE			(1 << 7)
# define SHORT			(1 << 8)
# define SHORT2			(1 << 9)
# define LONG			(1 << 10)
# define LONG2			(1 << 11)
# define PRECISION		(1 << 12)
# define BOLD			(1 << 13)
# define BACKGROUND		(1 << 14)
# define FOREGROUND		(1 << 15)
# define RGB			(1 << 16)
# define BG_RGB			(1 << 17)
# define POINTER		(1 << 18)

/*
** COLORS
*/

# define RED			"\033[0;31m"
# define REDB			"\033[1;31m"
# define GREEN			"\033[0;32m"
# define GREENB			"\033[1;32m"
# define YELLOW			"\033[0;33m"
# define YELLOWB		"\033[1;33m"
# define BLUE			"\033[0;34m"
# define BLUEB			"\033[1;34m"
# define MAGENTA		"\033[0;35m"
# define MAGENTAB		"\033[1;35m"
# define CYAN			"\033[0;36m"
# define CYANB			"\033[1;36m"
# define RESET			"\033[0m"

# define BUFF_SIZE		42

/*
** TYPEDEFS
*/

/*
** MATH MACROS
*/

# define MAX(a, b)		b & ((a - b) >> 31) | a & (~(a - b) >> 31)
# define MIN(a, b)		a & ((a - b) >> 31) | b & (~(a - b) >> 31)

typedef unsigned long long	t_ulong2;
typedef long long			t_long2;

typedef struct				s_printf
{
	int				f;
	short			i;
	int				fd;
	int				precision;
	int				padding;
	int				printed;
	unsigned int	buf_i;
	char			buf[BUFF_SIZE];
	char			*format;
	char			c;
	int				color;
	int				bg;
	va_list			ap;
}							t_printf;

typedef struct				s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}							t_list;

int							ft_atoi(const char *str);
void						ft_bzero(void *s, size_t n);
int							ft_isalnum(int c);
int							ft_isalpha(int c);
int							ft_isascii(int c);
int							ft_isdigit(int c);
int							ft_isprint(int c);

char						*ft_itoa(int n);

void						ft_lstadd(t_list **alst, t_list *new);
void						ft_lstappend(t_list **alst, t_list *new);
void						ft_lstdel(t_list **alst,
void (*del)(void *, size_t));
void						ft_lstdelone(t_list **alst,
void (*del)(void *, size_t));
void						ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list						*ft_lstnew(void const *content,
size_t content_size);
t_list						*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void						*ft_memalloc(size_t size);
void						*ft_memccpy(void *dst, const void *src,
int c,
size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
void						*ft_memcpy(void *dst, const void *src, size_t n);
void						ft_memdel(void **ap);
void						*ft_memmove(void *dst, const void *src, size_t len);
void						*ft_memset(void *b, int c, size_t len);
void						*ft_memdup(const void *src, size_t size);

void						ft_putchar_fd(char c, int fd);
void						ft_putchar(char c);
void						ft_putendl_fd(char const *s, int fd);
void						ft_putendl(char const *s);
void						ft_putnbr_fd(int n, int fd);
void						ft_putnbr(int n);
void						ft_putstr_fd(char const *s, int fd);
void						ft_putwchar(wchar_t wc);
size_t						ft_wcharlen(wchar_t wc);
void						ft_putstr(char const *s);

void						*ft_realloc(void *ptr, size_t size);
char						*ft_strcat(char *s1, const char *s2);
char						*ft_strchr(const char *s, int c);
void						ft_strclr(char *s);
int							ft_strcmp(const char *s1, const char *s2);
char						*ft_strcpy(char *dest, const char *src);
void						ft_strdel(char **as);
char						*ft_strdup(const char *src);
int							ft_strequ(char const *s1, char const *s2);
void						ft_striter(char *s, void (*f)(char *));
void						ft_striteri(char *s,
void (*f)(unsigned int, char *));
char						*ft_strjoin(char const *s1, char const *s2);

size_t						ft_strlcat(char *dst, const char *src,
size_t dstsize);
size_t						ft_strlen(const char *s);
size_t						ft_strlen_uc(wchar_t *str);
void						ft_putwstr(wchar_t *str);
size_t						ft_wstrlen(wchar_t *ws);

char						*ft_strmap(char const *s, char (*f)(char));
char						*ft_strmapi(char const *s, char (*f)(unsigned int,
char));
char						*ft_strrev(char *str);

char						*ft_strncat(char *s1, const char *s2, size_t n);
int							ft_strncmp(const char *s1, const char *s2,
size_t n);
char						*ft_strncpy(char *dest, const char *src,
size_t len);
int							ft_strnequ(char const *s1, char const *s2,
size_t n);
char						*ft_strnew(size_t size);
char						*ft_strnstr(const char *haystack, const char
*needle,
size_t len);

char						*ft_strrchr(const char *s, int c);
char						**ft_strsplit(char const *s, char c);
char						*ft_strstr(const char *haystack, const char
*needle);
char						*ft_strsub(char const *s, unsigned int start,
size_t len);
char						*ft_strtrim(char const *s);

int							ft_tolower(int c);
int							ft_toupper(int c);

/*
** FUNCTION PROTOTYPES
*/

int							ft_printf(const char *format, ...);
int							ft_printf_fd(int fd, const char *format, ...);

void						buffer(t_printf *p, void *arr, unsigned int size);
int							find_index(const char *str, char c);
void						parse_flags(t_printf *p);
void						print_padding(t_printf *p, int n);
void						parse_padding(t_printf *p);
void						parse_double(t_printf *p);
void						parse_string(t_printf *p);
void						parse_conversions(t_printf *p);
void						parse_precision(t_printf *p);
void						parse_format(t_printf *p);
void						print_digit_pf(t_printf *p, t_long2 n);
void						parse_digit(t_printf *p);
void						ft_itoa_base_pf(t_printf *p, char *base,
							t_ulong2 n);
void						parse_base(t_printf *p);
int							nbrlen(t_long2 n);
void						print_float(long double n, t_printf *p);
void						parse_char(t_printf *p);
void						parse_pointer(t_printf *p);
void						parse_color(t_printf *p);
void						ft_putwchar_pf(t_printf *p, wchar_t wc);
void						fill_base_pf(t_printf *p, int *index, char **arr);
void						value_modifier(int *num1, int *num2, int i);

#endif
