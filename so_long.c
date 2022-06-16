/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:46:44 by smayrand          #+#    #+#             */
/*   Updated: 2022/06/15 15:07:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "solib.h"

void	character(void *mlx, void *win, t_data img, int x, int y)
{
	int		i;
	int		j;

	j = 0;
	while (j < y)
	{	
		i = 0;
		while (i < x)
		{
			mlx_pixel_put(mlx, win, i, j, 0x00FF0000);
//			mlx_put_image_to_window(mlx, win, img.img, i, j);
		i++;
		}
	j++;
	}
}

int	main(void)
{
	t_main	main;
	t_data	img;

	main.mlx = mlx_init();
	main.win = mlx_new_window(main.mlx, 1080, 720, "Bushes of love");
	img.img = mlx_new_image(main.mlx, 1080, 720);
	img.address = mlx_get_data_addr(img.img, &img.bits_per_pixel,
			&img.line_length, &img.endian);
	character(main.mlx, main.win, img, 64, 64);
	mlx_key_hook(main.win, key_hook, &main);
	mlx_hook(main.win, 17, 0, ft_exit, &main);
	mlx_loop(main.mlx);
	return (0);
}

