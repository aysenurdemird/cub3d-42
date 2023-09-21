/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:07:17 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:07:19 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_nl(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] && buf[i] != 10)
		i++;
	if (buf[i] == 10)
		return (1);
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(const char *src)
{
	char	*str;

	str = malloc(ft_strlen(src) + 1);
	if (!str)
		return (0);
	ft_memcpy(str, src, ft_strlen(src) + 1);
	return (str);
}
