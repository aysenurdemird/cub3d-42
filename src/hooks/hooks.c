/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:07:08 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:07:09 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

int	key_press(int keycode)
{
	if (keycode == ESC)
		quit();
	else if (keycode == W)
		data()->key.w = 1;
	else if (keycode == S)
		data()->key.s = 1;
	else if (keycode == A)
		data()->key.a = 1;
	else if (keycode == D)
		data()->key.d = 1;
	else if (keycode == LEFT)
		data()->key.left = 1;
	else if (keycode == RIGHT)
		data()->key.right = 1;
	else if (keycode == P)
		data()->key.p = !data()->key.p;
	return (0);
}

int	key_release(int keycode)
{
	if (keycode == W)
		data()->key.w = 0;
	else if (keycode == S)
		data()->key.s = 0;
	else if (keycode == A)
		data()->key.a = 0;
	else if (keycode == D)
		data()->key.d = 0;
	else if (keycode == LEFT)
		data()->key.left = 0;
	else if (keycode == RIGHT)
		data()->key.right = 0;
	return (0);
}

void	hooks(void)
{
	if (data()->key.w == 1)
		move_forward();
	if (data()->key.s == 1)
		move_backwards();
	if (data()->key.a == 1)
		move_left();
	if (data()->key.d == 1)
		move_right();
	if (data()->key.left == 1)
		rotate_left();
	if (data()->key.right == 1)
		rotate_right();
}
