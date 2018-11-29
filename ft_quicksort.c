/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:39:05 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/29 18:28:22 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(char *a, char *b)
{
	char c;

	c = *b;
	*b = *a;
	*a = c;
}

static int	part(char *s, size_t low, size_t high)
{
	int		pivot;
	size_t	i;
	size_t	j;

	pivot = s[high];
	i = low - 1;
	j = low;
	while (j <= high - 1)
	{
		if (s[j] <= pivot)
		{
			i++;
			swap(&s[i], &s[j]);
		}
		j++;
	}
	swap(&s[i + 1], &s[high]);
	return (i + 1);
}

static void	sort(char *s, size_t low, size_t high)
{
	if (low < high)
	{
		sort(s, low, part(s, low, high) - 1);
		sort(s, part(s, low, high) + 1, high);
	}
}

char		*ft_quicksort(char const *s, size_t len)
{
	char	*res;

	if (!s || !len)
		return (NULL);
	if (len == 1)
		return ((char*)s);
	if (!(res = ft_strdup(s)))
		return (NULL);
	ft_putstr("test 1\n");
	sort(res, 0, len - 1);
	return (res);
}

int main()
{
	char	*s1 = "a";
	ft_putstr(s1); ft_putchar('\n');
	ft_putstr(ft_quicksort(s1, ft_strlen(s1))); ft_putchar('\n');

	char	*s2 = "rwestrdytfugiuhi";
	ft_putstr(s2); ft_putchar('\n');
	ft_putstr(ft_quicksort(s2, ft_strlen(s2))); ft_putchar('\n');
}
