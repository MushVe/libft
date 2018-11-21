/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:30:00 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/19 13:35:41 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char const	*s;
	char		*d;

	if (dest == NULL || src == NULL)
		return (NULL);
	s = src;
	d = dest;
	if (d > s)
	{
		while (1 + (--n))
			d[n] = s[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
