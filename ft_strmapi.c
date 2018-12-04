/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:38:05 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/14 16:45:22 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int t;
	int i;
	char *res;

	if (!s)
	{
		return NULL;
	}
	i = 0;
	t = ft_strlen((char *)s);
	if (!(res = (char *)ft_memalloc(sizeof(char) * (t + 1))))
		return (0);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
