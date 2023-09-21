/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:27:00 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/15 17:35:16 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ml;
	size_t	strlen;

	i = 0;
	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen || !len)
		return (ft_strdup(""));
	if (strlen > len)
		strlen = len;
	ml = (char *)ft_calloc((strlen + 1), sizeof(char));
	if (!ml)
		return (NULL);
	ml[strlen] = '\0';
	while (strlen--)
		ml[i++] = s[start++];
	return (ml);
}
