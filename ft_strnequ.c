/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:51:05 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/21 17:05:13 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		ft_putstr("\nRetour A\t");
		return (1);
	}
		while (s1[i] != '\0' && s2[i] != '\0' && i <= n + 1)
	{
		ft_putnbr(i); ft_putchar('\t'); ft_putnbr(n); ft_putchar('\t');
		if (s1[i] != s2[i])
		{
			ft_putstr("\nRetour B\t");
			return (0);
		}
		i++;
	}
	ft_putstr("\nRetour C\t");
	return (1);
}
/*
int	main()
{
	ft_putnbr(ft_strnequ("salut", "salut", 50));
	ft_putchar('1');
	ft_putchar('\t');	ft_putchar('1');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("test", "tests", 6));
	ft_putchar('0');
	ft_putchar('\t');	ft_putchar('2');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("tests", "test", 6));
	ft_putchar('0');
	ft_putchar('\t');	ft_putchar('3');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("test", "tEst", 6));
	ft_putchar('0');
	ft_putchar('\t');	ft_putchar('4');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("", "test", 6));
	ft_putchar('0');
	ft_putchar('\t');	ft_putchar('5');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("test", "", 6));
	ft_putchar('0');
	ft_putchar('\t');	ft_putchar('6');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("", "", 6));
	ft_putchar('1');
	ft_putchar('\t');	ft_putchar('7');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("test", "test", 2));
	ft_putchar('1');
	ft_putchar('\t');	ft_putchar('8');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("tew", "tez", 2));
	ft_putchar('1');
	ft_putchar('\t');	ft_putchar('9');
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("", "", 0));
	ft_putchar('1');
	ft_putchar('\t');	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(ft_strnequ("abcd", "zxyw", 0));
	ft_putchar('1');
	ft_putchar('\t');	ft_putnbr(11);
	ft_putchar('\n');
	return (0);
}
*/
