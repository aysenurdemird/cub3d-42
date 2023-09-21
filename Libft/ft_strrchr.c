/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:34:34 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/15 15:35:09 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cchar;
	int				i;

	cchar = (unsigned char)c;
	i = ft_strlen(s) + 1;
	while (i >= 0)
	{
		i--;
		if (s[i] == cchar)
			return ((char *)&s[i]);
	}
	return (NULL);
}
