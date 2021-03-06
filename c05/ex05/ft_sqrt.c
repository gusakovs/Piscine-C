/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:52:22 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/22 01:27:50 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i) < (unsigned int)nb)
		i++;
	return (i * i == (unsigned int)nb ? i : 0);
}
