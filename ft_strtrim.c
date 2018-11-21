/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:27:15 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/21 17:40:20 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		cpt;
	int		start;
	char	*res;

	i = 0;
	cpt = 0;
	while (s[i] != '\0' && s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
		i++;
	start = i;
	while (s[i++] != '\0')
		cpt++;
	while (s[--i] == ' ' && s[i] == '\n' && s[i] == '\t')
		cpt--;
	if (!(res = (char*)ft_memalloc(sizeof(char) * (cpt + 1))))
		return (NULL);
	i = 0;
	while (i < cpt)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
