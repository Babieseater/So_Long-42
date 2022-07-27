/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 06:32:43 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/27 02:17:15 by smayrand         ###   ########.fr       */
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
		exit(ft_printf("Error\nCan't allocate memory\n"));
	}
	fd = open(file, O_RDONLY, 0644);
	if (fd < 0)
		exit(ft_printf("Error\nFile not existing\n"));
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

void	validate_borders(t_main *game)
{
	t_var	v;

	v.y = 0;
	while (game->map[v.y] != game->map[game->y_win + 1])
	{
		v.x = 0;
		while (game->map[v.y][v.x])
		{
			if (game->map[v.y][v.x] == '\n' || game->map[v.y][v.x] == '\0')
				break ;
			else if (v.y == 0 || v.x == 0 || v.x == game->x_win - 1
				|| v.y == game->y_win - 1)
			{
				if (game->map[v.y][v.x] != '1')
					ft_exit(game, "Error\nWalls not closed\n");
			}
			v.x++;
		}
		v.y++;
	}
}

void	validate_content(t_main *game)
{
	t_var	v;

	v.yy = -1;
	game->tiles = 0;
	while (game->map[++v.yy])
	{
		v.xx = 0;
		while (game->map[v.yy][v.xx])
		{
			if (game->map[v.yy][v.xx] == 'C')
				game->items_n += 1;
			else if (game->map[v.yy][v.xx] == 'E')
				game->end_n += 1;
			else if (game->map[v.yy][v.xx] == 'P')
				game->start_n += 1;
			game->tiles++;
			v.xx++;
			if (game->map[v.yy][v.xx + 1] == '\0'
				|| game->map[v.yy][v.xx + 1] == '\n')
				break ;
		}
	}
	if (game->items_n <= 0 || game->end_n <= 0 || game->start_n != 1
		|| v.yy * v.xx != game->tiles)
		ft_exit(game, "Error\nMap integrity not valid\n");
}

void	validate_ext(char *file)
{
	char	*ext;
	t_var	v;

	ext = ".ber";
	v.j = 0;
	v.i = ft_strlen(file) - 4;
	while (ext[v.j] != '\0')
	{
		if (file[v.i] != ext[v.j] || (v.i - 5) <= 0)
		{
			ft_printf("%s", "Error\nWrong map extention\n");
			exit (0);
		}
		v.i++;
		v.j++;
	}
}
