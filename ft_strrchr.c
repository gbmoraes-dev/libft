/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:42:55 by gamoraes          #+#    #+#             */
/*   Updated: 2023/10/19 17:45:45 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*string)
	{
		if (*string == character)
			last_occurrence = string;
		string++;
	}
	if (*last_occurrence == character)
		return ((char *)last_occurrence);
	return (0);
}
