/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:39:50 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/16 16:05:05 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(const char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	k;
	int	i;

	if (!s1)
		return (NULL);
	k = ft_strlen(s1) - 1;
	i = 0;
	while (isin(s1[i], set))
		i++;
	while (isin(s1[k], set))
		k--;
	return (ft_substr(s1, i, (k - i + 1)));
}
