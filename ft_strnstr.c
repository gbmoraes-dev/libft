/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:09:28 by gamoraes          #+#    #+#             */
/*   Updated: 2023/10/20 13:52:03 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	unsigned int	i;
	unsigned int	j;

	if (*little == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < length)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < length)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &(big[i]));
			if (little[j] != big[i + j] || big[i + j] == '\0')
				break ;
		}
		i++;
	}
	return (0);
}
