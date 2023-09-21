/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:42:14 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/16 18:42:28 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	llen;

	if (!s)
		return ;
	llen = ft_strlen(s);
	i = 0;
	while (i < llen)
	{
		f(i, &s[i]);
		i++;
	}
}
