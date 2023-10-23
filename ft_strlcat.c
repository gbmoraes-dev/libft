/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:28:43 by gamoraes          #+#    #+#             */
/*   Updated: 2023/10/23 16:43:29 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	size;

	size = ft_strlen(dest);
	while (*src && length-- > 0)
		dest[size++] = *src++;
	dest[size] = '\0';
	return (ft_strlen(dest));
}
