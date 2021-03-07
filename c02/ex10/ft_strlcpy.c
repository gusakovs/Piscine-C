/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:18:31 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/10 13:47:18 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str [n])
	{
		n++;
	}
	return (n);
}

unsigned 	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = 0;
		while (j < i + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (size)
	{
		j = 0;
		while (j < size - 1)
		{
			dest[j] = src[j];
		}
		dest[j] = '\0';
	}
	return (i);
}

