/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 06:32:43 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/19 16:31:49 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include "../gnl/get_next_line_bonus.h"
#include <stdio.h>

void	map_read(t_main *game, char *file)
{
	int	fd;
	int	i;

	game->map = ft_calloc(sizeof(char), 4096);
	if (!game->map)
	{
		free(game->map);
		exit(ft_printf("Error, can't allocate memory"));
	}
	fd = open(file, O_RDONLY, 0644);
	i = 0;
	while (i >= 0)
	{
		game->map[i] = get_next_line(fd);
		if (!game->map[i])
			break ;
		i++;
	}
	game->y_win = i;
	game->x_win = ft_strlen(game->map[0]) - 1;
}

void	validate_borders(t_main *game, char *file)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if ((game->map[y][x + 1] == '\0' && game->map[y][x] == '1')
				|| (game->map[y][x + 1] == '\n' && game->map[y][x] == '1'))
				break ;
			else if (y == 0 || x == 0 || x == (game->x_win / 64 - 2)
				|| y == (game->y_win / 64 - 1))
			{
				if (game->map[y][x] != '1')
				{
					ft_printf("%s", "Error walls");
				}
			}
			x++;
		}
		y++;
	}
}

void	validate_ext(t_main *game, char *file)
{
	char	*ext;
	int		i;
	int		j;

	ext = ".ber";
	j = 0;
	i = ft_strlen(file) - 4;
	while (ext[j] != '\0')
	{
		if (file[i] != ext[j])
		{
			ft_printf("Error\n%s\n", "WRONG MAP EXTENSION");
			ft_exit(game);
			break ;
		}
		i++;
		j++;
	}
}

/*void	validate_CEP(t_main *game, char *file)
{
	 
}
*/