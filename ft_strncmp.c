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
	while (length > 0 && *string1 && *string2 && *string1 == *string2)
	{
		string1++;
		string2++;
		length--;
	}
	return (*string1 - *string2);
}
