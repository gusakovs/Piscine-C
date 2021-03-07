/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:04:10 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/09 13:33:23 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_length(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_length(str));
}
