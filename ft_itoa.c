/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:08:38 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/26 11:57:48 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	nbr(int n, int i, char *s)
{
	int	max;

	max = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			max = 1;
			n++;
		}
		s[0] = '-';
		n = -n;
	}
	if (n >= 10)
		nbr(n / 10, i - 1, s);
	if (max == 1)
		s[i] = ((n % 10) + '1');
	else
		s[i] = ((n % 10) + '0');
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cpt;
	int		nb;

	cpt = 0;
	nb = n;
	while (nb != 0)
	{
		cpt++;
		nb = nb / 10;
	}
	if (n <= 0)
		cpt++;
	if (!(str = (char*)ft_memalloc(sizeof(char) * (cpt))))
		return (NULL);
	nbr(n, cpt - 1, str);
	return (str);
}
