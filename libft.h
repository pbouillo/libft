/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:01:58 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/19 17:52:34 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* CTYPE | The ctype.h header file of the C Standard Library declares 
several functions that are useful for testing and mapping characters. */

int		ft_isalpha(int a);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int a);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* STRINGS (mem-functions) | The strings.h header file of the 
C Standard Library declares several functions that are useful for manipulating 
any type of arrays (but bytewise). */

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

/* PUTFUNCTIONS | */

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* STDLIB | The stdlib.h header defines four variable types, 
several macros, and various functions for performing general functions. */

int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
// char	*ft_itoa(int n);

/* STRING | The string.h header defines one variable type, one macro, 
and various functions for manipulating arrays of characters. */

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* LIST-FUNCTIONS | 
The lst-funtcions allow you to manipulate and use lists. 
Lists are quiet useful if you dont know the final length of an array 
because you can just append as many nodes as you want 
until you run out of memory. */

// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstadd_front(t_list **lst, t_list *new);
// t_list	*ft_lstnew(void *content); 

#endif
