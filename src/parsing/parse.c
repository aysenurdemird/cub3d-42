/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <aydemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:35 by aydemir           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:36 by aydemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

static void	ft_exit(char *s, int fd)
{
	if (fd < 0)
		close(fd);
	write(2, s, ft_strlen(s));
	ft_free(&data()->xpm);
	ft_free(&data()->rgb);
	ft_free(&data()->map);
	exit(1);
}

int	parse(char *file)
{
	int	fd;

	if (ft_strncmp(get_ext(file), "cub", 4) != 0)
		ft_exit("Error\nInvalid extension\n", -1);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_exit("Error\nCannot open the map\n", fd);
	if (parse_info(fd) == 1)
		ft_exit("Error\nInvalid information\n", fd);
	if (parse_map(fd) == 1)
		ft_exit("Error\nInvalid map\n", fd);
	close(fd);
	return (0);
}
