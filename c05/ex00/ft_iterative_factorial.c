/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:27:11 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/22 01:20:52 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0 || i >= 13)
		return (0);
	if (i <= 1)
		return (1);
	while (nb > 1)
	{
		i *= --nb;
	}
	return (i);
}
