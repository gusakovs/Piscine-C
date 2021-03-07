/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 07:56:31 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/24 15:35:45 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int delta;
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		tab = NULL;
	else
	{
		delta = max - min;
		if (tab = malloc(sizeof(int) * delta + 1))
		{
			while (min < max)
			{
				tab[i] = min;
				min++;
				i++;
			}
			tab[i] = '\0';
		}
	}
	return (tab);
}
