/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 07:51:38 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/24 15:35:12 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	if (dup = malloc(sizeof(char) * (ft_strlen(src) + 1)))
	{
		while (*src)
		{
			dup[i] = *src;
			src++;
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (0);
}
