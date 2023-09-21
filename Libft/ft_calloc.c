/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:05:13 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/15 17:09:27 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*bbzero;

	bbzero = malloc(count * size);
	if (bbzero == 0)
		return (0);
	ft_bzero(bbzero, count * size);
	return (bbzero);
}
