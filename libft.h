/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 08:18:47 by rwright           #+#    #+#             */
/*   Updated: 2019/01/18 13:17:13 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

# ifndef FALSE
#  define FALSE			0
# endif
# ifndef TRUE
#  define TRUE			!FALSE
# endif

/*
** [LIBFT I/O]
*/
void	ft_putnbr(int n);
void	ft_putstr(char *s);

/*
** [STDLIB]
*/

int		ft_atoi(char *str);

/*
** [STRING]
*/
char	*ft_strcat(char *dst, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncat(char *dst, char *src, unsigned int n);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
char	*ft_strstr(char *haystack, char *needle);
char	*ft_strnstr(char *haystack, char *needle, size_t n);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strdup(char *str);

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
int		ft_strlen(char *str);
void	ft_putchar(char c);
#endif
