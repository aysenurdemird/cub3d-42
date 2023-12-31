/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_check_chars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:51 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:52 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

static void	set_values(double dir_x, double dir_y, double pla_x, double pla_y)
{
	data()->var.dir_x = dir_x;
	data()->var.dir_y = dir_y;
	data()->var.plane_x = pla_x;
	data()->var.plane_y = pla_y;
}

static void	init_vectors(int x, int y)
{
	data()->var.pos_x = x + 0.5;
	data()->var.pos_y = y + 0.5;
	if (data()->map[y][x] == 'N')
		set_values(0, -1, 0.66, 0);
	else if (data()->map[y][x] == 'S')
		set_values(0, 1, -0.66, 0);
	else if (data()->map[y][x] == 'E')
		set_values(1, 0, 0, 0.66);
	else if (data()->map[y][x] == 'W')
		set_values(-1, 0, 0, -0.66);
}

int	check_chars(void)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (data()->map[i])
	{
		j = 0;
		while (data()->map[i][j])
		{
			if (!ft_strchr(" 10NSEW", data()->map[i][j]))
				return (0);
			if (data()->map[i][j] == 'N' || data()->map[i][j] == 'S' \
				|| data()->map[i][j] == 'E' || data()->map[i][j] == 'W')
			{
				init_vectors(j, i);
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
