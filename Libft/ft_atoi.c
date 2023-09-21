/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:35:48 by aydemir           #+#    #+#             */
/*   Updated: 2022/01/15 16:35:54 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	rtn;
	int	isneg;

	rtn = 0;
	isneg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		isneg -= (*str++ == '-') * 2;
	while (ft_isdigit(*str))
		rtn = *str++ - '0' + rtn * 10;
	return (rtn * isneg);
}
