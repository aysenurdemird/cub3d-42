/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   post_dda_calcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:06 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:07 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	calc_dist_perp(void)
{
	if (data()->var.side == 0)
		data()->var.perp_wall_dist = \
			data()->var.side_dist_x - data()->var.delta_dist_x;
	else
		data()->var.perp_wall_dist = \
			data()->var.side_dist_y - data()->var.delta_dist_y;
}

void	calc_vertical_line_height(void)
{
	data()->var.line_height = \
		(int)(SCREEN_HEIGHT / data()->var.perp_wall_dist);
}

void	calc_draw_start_and_draw_end(void)
{
	int	draw_start;

	draw_start = (-1) * data()->var.line_height / 2 + SCREEN_HEIGHT / 2;
	data()->var.draw_start = draw_start;
	if (data()->var.draw_start < 0)
		data()->var.draw_start = 0;
	data()->var.draw_end = data()->var.line_height / 2 + SCREEN_HEIGHT / 2;
	if (data()->var.draw_end >= SCREEN_HEIGHT)
		data()->var.draw_end = SCREEN_HEIGHT - 1;
}
