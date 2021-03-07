/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 08:05:11 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/24 16:03:14 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	delta;
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		delta = max - min;
		if (tab = malloc(sizeof(int) * delta))
		{
			while (min < max)
			{
				*range[i] = min;
				min++;
				i++;
			}
			return (delta);
		}
	}
	return (-1);
}
