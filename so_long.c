/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:46:44 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/08 16:30:04 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "solib.h"
#include "./gnl/get_next_line_bonus.h"

void	init_variable(t_main *game)
{
	game->tile_s = 64;
	game->items = 1;
}

int	main(int argc, char **argv)
{
	t_main	main;

	init_variable(&main);
	map_len(&main, argv[1]);
	main.mlx = mlx_init();
	printf("\n INIT WORKING \n");
	main.mlx_win = mlx_new_window(main.mlx, 1080, 720, "Bushes of love");
	printf("\n NEW WINDOW WORKING \n");
	ft_xpm_load(&main);
	printf("\n XPM LOADED \n");
	ft_map_init(&main);
	printf("\n MAP LOADED \n");
	mlx_hook(main.mlx_win, 2, 1L << 0, key_hook, &main);
	mlx_hook(main.mlx_win, ON_DESTROY, 0, ft_exit, &main);
	mlx_loop(main.mlx);
	return (0);
}

