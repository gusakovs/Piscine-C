/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:44:32 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/24 15:32:16 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_result(int size, char **strs, char *sep)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i < size)
		result += ft_strlen(strs[i++]);
	result += ft_strlen(sep) * (i - 1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	i = 0;
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * (ft_result(size, strs, sep) + 1))))
		return (0);
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
