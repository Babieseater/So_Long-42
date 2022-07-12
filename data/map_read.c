/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 06:32:43 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/12 13:20:12 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include "../gnl/get_next_line_bonus.h"
#include <stdio.h>

void	map_len(t_main *game, char *file)
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
		printf("%s", game->map[i]);
		if (!game->map[i])
			break ;
		i++;
	}
	game->y_win = i;
	game->x_win = ft_strlen(game->map[0]) - 1;
}
