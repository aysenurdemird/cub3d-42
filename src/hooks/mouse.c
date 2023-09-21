/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:07:12 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:07:13 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

int	mouse_hook(void)
{
	int	x;
	int	y;

	if (data()->key.p == 1)
	{
		mlx_mouse_hide();
		mlx_mouse_get_pos(data()->win, &x, &y);
		if (x > SCREEN_WIDTH / 2)
			rotate_right();
		if (x < SCREEN_WIDTH / 2)
			rotate_left();
		mlx_mouse_move(data()->win, SCREEN_WIDTH / 2, y / 2);
	}
	else
		mlx_mouse_show();
	return (0);
}
