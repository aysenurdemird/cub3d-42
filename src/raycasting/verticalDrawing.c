/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verticalDrawing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:23 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:24 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	my_mlx_pixel_put(int x, int y, int color)
{
	char	*dst;

	dst = data()->img.addr + \
		(y * data()->img.line_len + x * (data()->img.bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	draw_vertical_line(int x)
{
	int	y;

	y = data()->var.draw_start;
	while (y < data()->var.draw_end)
	{
		my_mlx_pixel_put(x, y, data()->var.color);
		y++;
	}
}
