/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 08:18:47 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 10:38:40 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

# define FALSE	0
# define TRUE	!FALSE

typedef unsigned char	t_byte;
typedef unsigned int	t_uint;

/*
** [LIBFT I/O]
*/
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putendl(char *str);

/*
** [STDLIB]
*/

int		ft_atoi(char *str);

/*
** [STRING]
*/
char	*ft_strcat(char *dst, const char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strstr(char *haystack, char *needle);
char	*ft_strnstr(char *haystack, char *needle, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strdup(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);

/*
** [CTYPES]
*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** [LIBFT STRINGS/MEM]
*/
int		ft_strlen(const char *str);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char *s, char (*f)(char));
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
int		ft_strequ(char *s1, char *s2);
int		ft_strnequ(char *s1, char *s2, size_t n);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(const char *s, char c);
#endif
