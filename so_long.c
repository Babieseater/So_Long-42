/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:46:44 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/26 17:03:34 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "solib.h"
#include "./gnl/get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	t_main	main;

	if (argc != 2)
	{
		ft_printf("%s\n", "Error\nWrong arguments number");
		return (0);
	}
	map_read(&main, argv[1]);
	main.mlx = mlx_init();
	main.mlx_win = mlx_new_window(main.mlx,
			main.x_win * 64, main.y_win * 64, "Bushes of Love");
	validate_ext(&main, argv[1]);
	validate_len(&main);
	validate_content(&main);
	validate_borders(&main);
	ft_xpm_load(&main);
	ft_map_init(&main);
	mlx_hook(main.mlx_win, 2, 1L << 0, key_hook, &main);
	mlx_hook(main.mlx_win, ON_DESTROY, 0, ft_exit, &main);
	mlx_loop(main.mlx);
	return (0);
}
