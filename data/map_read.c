/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 06:32:43 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/25 13:05:42 by smayrand         ###   ########.fr       */
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

void	validate_len(t_main *game)
{
	t_var	var;

	var.y = 0;
	while (game->map[var.y + 1])
	{
		var.a = ft_strlen(game->map[var.y]);
		var.b = ft_strlen(game->map[var.y + 1]);
		if (var.b != var.a)
		{
			if (game->map[var.y + 2] == 0)
				var.b = ft_strlen(game->map[var.y + 1]) + 1;
			else
			{
				break ;
			}
		}
		var.y++;
	}
	if (var.b != var.a)
		ft_printf("%s", "Error\nMap not rectangular");
	else
		validate_borders(game);
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
			if (game->map[v.y][v.x] == '\0'
				|| game->map[v.y][v.x] == '\n')
			{
				break ;
			}	
			else if (v.y == 0 || v.x == 0 || v.x == game->x_win - 1
				|| v.y == game->y_win - 1)
			{
				if (game->map[v.y][v.x] != '1')
				{
					ft_printf("%s", "Error walls");
				}
			}
			v.x++;
			printf("X:%d\n", v.x);
		}
		v.y++;
		printf("Y:%d\n", v.y);
	}
}

void	validate_ext(t_main *game, char *file)
{
	char	*ext;
	t_var	v;

	ext = ".ber";
	v.j = 0;
	v.i = ft_strlen(file) - 4;
	while (ext[v.j] != '\0')
	{
		if (file[v.i] != ext[v.j])
		{
			ft_printf("Error\n%s\n", "WRONG MAP EXTENSION");
			ft_exit(game);
			break ;
		}
		v.i++;
		v.j++;
	}
}
