/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:47:55 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/28 17:47:27 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!src)
	{
		return NULL;
	}
	while (i <= n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		if (((char *)dest)[i] == (char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
