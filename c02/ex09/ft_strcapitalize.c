/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:08:01 by mgusakov          #+#    #+#             */
/*   Updated: 2021/02/10 16:49:01 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_capitalize(char *c)
{
	*c -= 32;
}

void	ft_minimize(char *c)
{
	*c += 32;
}

int		ft_isupp(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_islow(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isnum(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (ft_isnum(*str) || ft_islow(*str) || ft_isupp(*str))
		{
			if (ft_isnum(*str))
			{
				str++;
			}
			else if (ft_islow(*str))
			{
				ft_capitalize(str);
			}
			while (ft_islow(*str++) || ft_isupp(*str))
			{
				ft_minimize(str);
			}
		}
		else
		{
			str++;
		}
	}
	return (str);
}
