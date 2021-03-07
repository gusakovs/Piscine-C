/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:08:51 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/09 12:05:13 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int left;

	left = 0;
	size--;
	while (left < size)
	{
		temp = tab[left];
		tab[left] = tab[size];
		tab[size] = temp;
		left++;
		size--;
	}
}
