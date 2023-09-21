/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_dda_calcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:10 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:12 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	calc_ray_pos_and_dir(int x)
{
	data()->var.camera_x = 2 * x / (double) SCREEN_WIDTH - 1;
	data()->var.ray_dir_x = data()->var.dir_x + \
							data()->var.plane_x * data()->var.camera_x;
	data()->var.ray_dir_y = data()->var.dir_y + \
							data()->var.plane_y * data()->var.camera_x;
}

void	set_box_pos(void)
{
	data()->var.map_x = (int) data()->var.pos_x;
	data()->var.map_y = (int) data()->var.pos_y;
	data()->var.hit = 0;
}

void	calc_delta_dist(void)
{
	if (data()->var.ray_dir_x == 0)
		data()->var.delta_dist_x = 1e30;
	else
		data()->var.delta_dist_x = fabs(1 / data()->var.ray_dir_x);
	if (data()->var.ray_dir_y == 0)
		data()->var.delta_dist_y = 1e30;
	else
		data()->var.delta_dist_y = fabs(1 / data()->var.ray_dir_y);
}

void	calc_step_and_side_dist(void)
{
	if (data()->var.ray_dir_x < 0)
	{
		data()->var.step_x = -1;
		data()->var.side_dist_x = (data()->var.pos_x - data()->var.map_x) \
								* data()->var.delta_dist_x;
	}
	else
	{
		data()->var.step_x = 1;
		data()->var.side_dist_x = (data()->var.map_x + 1.0 \
			- data()->var.pos_x) * data()->var.delta_dist_x;
	}
	if (data()->var.ray_dir_y < 0)
	{
		data()->var.step_y = -1;
		data()->var.side_dist_y = (data()->var.pos_y - data()->var.map_y) \
								* data()->var.delta_dist_y;
	}
	else
	{
		data()->var.step_y = 1;
		data()->var.side_dist_y = (data()->var.map_y + 1.0 \
			- data()->var.pos_y) * data()->var.delta_dist_y;
	}
}
