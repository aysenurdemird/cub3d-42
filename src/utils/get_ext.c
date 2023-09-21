/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ext.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:05:34 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:05:35 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

const char	*get_ext(const char *file)
{
	const char	*dot;

	dot = ft_strrchr(file, '.');
	if (!dot || dot == file)
		return ("");
	return (dot + 1);
}
