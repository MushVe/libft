/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_fusion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 10:08:47 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/30 11:56:32 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	sort(char *s, size_t len, size_t mid)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (!(tmp = (char*)ft_memalloc(sizeof(char) * len)))
		return ;
	i = 0;
	j = 0;
	while (j < len)
	{
		if (mid == len)
		{
			if (i == len)
			{
				if (s[mid] < tmp[i])
					tmp[j] = s[mid++];
				tmp[j] = s[i++];
			}
			tmp[j] = s[mid++];
		}
		else
			tmp[j] = s[i++];
	}
	i = 0;
	while (i < len)
	{
		s[i] = tmp[i];
		i++;
	}
	ft_memdel((void**)&tmp);
}

static void	fusion(char *s, size_t len)
{
	size_t	mid;

	if (len < 2)
		return ;
	mid = len / 2;
	fusion(s, mid);
	fusion(s - mid, len - mid);
	sort(s, len, mid);
}

char		*ft_tri_fusion(char const *s, size_t len)
{
	char	*res;

	if (!s || !len)
		return (NULL);
	if (len == 1)
		return ((char*)s);
	if (!(res = ft_strdup(s)))
		return (NULL);
	fusion(res, len);
	return (res);
}

int main()
{
	char *s1 = "trfygub"; ft_putstr(s1); ft_putchar('\n');
	ft_putstr(ft_tri_fusion(s1, ft_strlen(s1))); ft_putchar('\n');

	char *s2 = " "; ft_putstr(s2); ft_putchar('\n');
	ft_putstr(ft_tri_fusion(s2, ft_strlen(s2))); ft_putchar('\n');

	char *s3 = "6877485"; ft_putstr(s3); ft_putchar('\n');
	ft_putstr(ft_tri_fusion(s3, ft_strlen(s3))); ft_putchar('\n');

	char *s4 = "aaaaa"; ft_putstr(s4); ft_putchar('\n');
	ft_putstr(ft_tri_fusion(s4, ft_strlen(s4))); ft_putchar('\n');

	char *s5 = "WWwwwWWWwwWwWwW"; ft_putstr(s5); ft_putchar('\n');
	ft_putstr(ft_tri_fusion(s5, ft_strlen(s5))); ft_putchar('\n');

	char *s6 = "erdtfygubh  426vgbhue64f we84 w68e47rw"; ft_putstr(s6);
	ft_putchar('\n');
	ft_putstr(ft_tri_fusion(s6, ft_strlen(s6))); ft_putchar('\n');

	return 0;
}
