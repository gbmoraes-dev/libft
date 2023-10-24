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
	size_t	dsize;
	size_t	ssize;
	size_t	i;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	i = 0;
	if (length > dsize + 1)
	{
		while (src[i] && (dsize + 1 + i) < length)
		{
			dest[dsize + i] = src[i];
			i++;
		}
	}
	dest[dsize + i] = '\0';
	if (length < dsize)
		return (length + ssize);
	return (dsize + ssize);
}
