/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:57:47 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/16 15:58:10 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nwl;
	int		n;
	int		i;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	nwl = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (nwl == 0)
		return (NULL);
	n = 0;
	i = 0;
	while (s1[i])
		nwl[n++] = s1[i++];
	i = 0;
	while (s2[i])
		nwl[n++] = s2[i++];
	nwl[n] = 0;
	return (nwl);
}
