/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:28:38 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/05 16:43:34 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char g_nb0;
char g_nb1;
char g_nb2;

void	ft_print_comb(void)
{
	g_nb0 = 0;
	while (g_nb0 <= '7')
	{
		g_nb1 = _nb0 + 1;
		while (g_nb1 <= '8')
		{
			g_nb2 = nb1 + 1;
			while (nb2 <= '9')
			{
				ft_putchar(g_nb0);
				ft_putchar(g_nb1);
				ft_putchar(g_nb2);
				if (nb0 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				g_nb2++;
			}
			g_nb1++;
		}
		nb0++;
	}
}
