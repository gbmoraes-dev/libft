/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:08:14 by gamoraes          #+#    #+#             */
/*   Updated: 2023/10/17 16:34:36 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t length)
{
	size_t count;

	count = 0;
	if (length == 0)
		return (0);
	while ((string1[count] || string2[count]) && length-- > 0)
	{
		if ((unsigned char)string1[count] != (unsigned char)string2[count])
			return ((unsigned char)string1[count] - (unsigned char)string2[count]);
		count++;
	}
}
