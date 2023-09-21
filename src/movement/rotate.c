/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:46 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:47 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	rotate_right(void)
{
	double	old_dir_x;
	double	old_plane_x;

	old_dir_x = data()->var.dir_x;
	data()->var.dir_x = data()->var.dir_x * cos(data()->var.rot_speed) \
		- data()->var.dir_y * sin(data()->var.rot_speed);
	data()->var.dir_y = old_dir_x * sin(data()->var.rot_speed) \
		+ data()->var.dir_y * cos(data()->var.rot_speed);
	old_plane_x = data()->var.plane_x;
	data()->var.plane_x = data()->var.plane_x * cos(data()->var.rot_speed) \
		- data()->var.plane_y * sin(data()->var.rot_speed);
	data()->var.plane_y = old_plane_x * sin(data()->var.rot_speed) \
		+ data()->var.plane_y * cos(data()->var.rot_speed);
}

void	rotate_left(void)
{
	double	old_dir_x;
	double	old_plane_x;

	old_dir_x = data()->var.dir_x;
	data()->var.dir_x = data()->var.dir_x * cos(-data()->var.rot_speed) \
		- data()->var.dir_y * sin(-data()->var.rot_speed);
	data()->var.dir_y = old_dir_x * sin(-data()->var.rot_speed) \
		+ data()->var.dir_y * cos(-data()->var.rot_speed);
	old_plane_x = data()->var.plane_x;
	data()->var.plane_x = data()->var.plane_x * cos(-data()->var.rot_speed) \
		- data()->var.plane_y * sin(-data()->var.rot_speed);
	data()->var.plane_y = old_plane_x * sin(-data()->var.rot_speed) \
		+ data()->var.plane_y * cos(-data()->var.rot_speed);
}
