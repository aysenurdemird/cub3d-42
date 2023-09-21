/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:39 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:40 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	move_forward(void)
{
	int	y;
	int	x;

	y = (int)data()->var.pos_y;
	x = (int)(data()->var.pos_x + data()->var.dir_x * data()->var.move_speed);
	if (data()->map[y][x] != '1')
		data()->var.pos_x += data()->var.dir_x * data()->var.move_speed;
	y = (int)(data()->var.pos_y + data()->var.dir_y * data()->var.move_speed);
	x = (int)data()->var.pos_x;
	if (data()->map[y][x] != '1')
		data()->var.pos_y += data()->var.dir_y * data()->var.move_speed;
}

void	move_backwards(void)
{
	int	y;
	int	x;

	y = (int)data()->var.pos_y;
	x = (int)(data()->var.pos_x - data()->var.dir_x * data()->var.move_speed);
	if (data()->map[y][x] != '1')
		data()->var.pos_x -= data()->var.dir_x * data()->var.move_speed;
	y = (int)(data()->var.pos_y - data()->var.dir_y * data()->var.move_speed);
	x = (int)data()->var.pos_x;
	if (data()->map[y][x] != '1')
		data()->var.pos_y -= data()->var.dir_y * data()->var.move_speed;
}

void	move_left(void)
{
	int	y;
	int	x;

	y = (int)data()->var.pos_y;
	x = (int)(data()->var.pos_x + data()->var.dir_y * data()->var.move_speed);
	if (data()->map[y][x] != '1')
		data()->var.pos_x += data()->var.dir_y * data()->var.move_speed;
	y = (int)(data()->var.pos_y - data()->var.dir_x * data()->var.move_speed);
	x = (int)data()->var.pos_x;
	if (data()->map[y][x] != '1')
		data()->var.pos_y -= data()->var.dir_x * data()->var.move_speed;
}

void	move_right(void)
{
	int	y;
	int	x;

	y = (int)data()->var.pos_y;
	x = (int)(data()->var.pos_x - data()->var.dir_y * data()->var.move_speed);
	if (data()->map[y][x] != '1')
		data()->var.pos_x -= data()->var.dir_y * data()->var.move_speed;
	y = (int)(data()->var.pos_y + data()->var.dir_x * data()->var.move_speed);
	x = (int)data()->var.pos_x;
	if (data()->map[y][x] != '1')
		data()->var.pos_y += data()->var.dir_x * data()->var.move_speed;
}
