/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:18:12 by gamoraes          #+#    #+#             */
/*   Updated: 2023/10/20 13:17:33 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_bzero(void *string, size_t length);
int		ft_isalnum(int character);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
void	*ft_memcpy(void *dest, const void *src, size_t length);
void	*ft_memmove(void *dest, const void *src, size_t length);
void	*ft_memset(void *string, int character, size_t length);
void	*ft_memchr(const void *string, int character, size_t length);
size_t	ft_strlcpy(char *dest, const char *src, size_t length);
size_t	ft_strlen(const char *string);
char	*ft_strnstr(const char *big, const char *little, size_t length);
char	*ft_strrchr(const char *string, int character);
char	*ft_strchr(const char *string, int character);
int		ft_strncmp(const char *string1, const char *string2, size_t length);
int		ft_tolower(int character);
int		ft_toupper(int character);

#endif
