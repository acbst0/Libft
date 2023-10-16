/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:28:27 by abostano          #+#    #+#             */
/*   Updated: 2023/10/16 17:52:04 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

int	ft_isalpha(int i);
int	ft_isdigit(int a);
int	ft_isalnum(char a);
int	ft_isascii(int i);
int	ft_isprint(char a);
int	ft_strlen(const char *a);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
int	ft_atoi(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memset(void *str, int x, size_t a);
void	ft_bzero(void *ptr, size_t a);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *d, const void *s, size_t a);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
