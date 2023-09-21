/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawingCeilingFloor.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:05:49 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:05:50 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	draw_floor(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < SCREEN_WIDTH)
	{
		j = SCREEN_HEIGHT / 2 - 1;
		while (++j < SCREEN_HEIGHT)
			my_mlx_pixel_put(i, j, data()->floor);
		i++;
	}
}

void	draw_ceiling(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < SCREEN_WIDTH)
	{
		j = -1;
		while (++j < SCREEN_HEIGHT / 2)
			my_mlx_pixel_put(i, j, data()->ceilling);
		i++;
	}
}
