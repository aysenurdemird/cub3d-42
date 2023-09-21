/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:41:55 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/15 15:45:27 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*pptr;
	size_t			i;

	pptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		if (pptr[i] == (unsigned char)c)
			return ((void *)&pptr[i]);
		i++;
	}
	return (0);
}
