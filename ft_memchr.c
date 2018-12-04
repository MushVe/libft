/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:08:10 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/28 17:47:45 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(void const *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	if (!s)
	{
		return NULL;
	}
	while (n--)
		if (str[i++] == (unsigned char)c)
			return (&((void *)s)[i - 1]);
	return (NULL);
}
