/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:26:55 by gamoraes          #+#    #+#             */
/*   Updated: 2023/10/18 15:27:47 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char	*dest_char;
	char	*src_char;

	dest_char = (char *) dest;
	src_char = (char *) src;
	if (dest_char == src_char)
		return (dest);
	if (dest_char > src_char)
		while (length-- > 0)
			*dest_char++ = *src_char++;
	if ((dest_char > src_char) && (dest_char < (src_char + length)))
	{
		dest_char += length;
		src_char += length;
		while (length-- > 0)
			*--dest_char = *--src_char;
	}
	return (dest);
}
