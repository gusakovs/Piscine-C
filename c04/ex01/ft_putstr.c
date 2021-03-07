/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:46:26 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/15 13:50:52 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	unsigned int n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
