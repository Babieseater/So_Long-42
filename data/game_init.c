/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:49:44 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/12 15:23:58 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include <stdio.h>

void	ft_xpm_load(t_main *asset)
{
	asset->player_d = mlx_xpm_file_to_image(asset->mlx,
			"./tex/plyr/char_d/char1.xpm", &asset->tile_s, &asset->tile_s);
	asset->player_r = mlx_xpm_file_to_image(asset->mlx,
			"./tex/plyr/char_r/char1.xpm", &asset->tile_s, &asset->tile_s);
	asset->player_l = mlx_xpm_file_to_image(asset->mlx,
			"./tex/plyr/char_l/char1.xpm", &asset->tile_s, &asset->tile_s);
	asset->player_u = mlx_xpm_file_to_image(asset->mlx,
			"./tex/plyr/char_u/char1.xpm", &asset->tile_s, &asset->tile_s);
	asset->grass = mlx_xpm_file_to_image(asset->mlx,
			"./tex/map/grass.xpm", &asset->tile_s, &asset->tile_s);
	asset->bush = mlx_xpm_file_to_image(asset->mlx,
			"./tex/map/bush.xpm", &asset->tile_s, &asset->tile_s);
	asset->end = mlx_xpm_file_to_image(asset->mlx,
			"./tex/map/portal.xpm", &asset->tile_s, &asset->tile_s);
	asset->item = mlx_xpm_file_to_image(asset->mlx,
			"./tex/objects/chest1.xpm", &asset->tile_s, &asset->tile_s);
	asset->item2 = mlx_xpm_file_to_image(asset->mlx,
			"./tex/objects/chest2.xpm", &asset->tile_s, &asset->tile_s);
}

void	ft_img_to_window(t_main	*asset, int x, int y)
{
	if (asset->map[y][x] == 'C')
	{
		mlx_put_image_to_window(asset->mlx, asset->mlx_win, asset->item,
			asset->tile_s * x, asset->tile_s * y);
		asset->items++;
	}
	else if (asset->map[y][x] == 'E')
		mlx_put_image_to_window(asset->mlx, asset->mlx_win, asset->end,
			asset->tile_s * x, asset->tile_s * y);
	else if (asset->map[y][x] == '0')
		mlx_put_image_to_window(asset->mlx, asset->mlx_win, asset->grass,
			asset->tile_s * x, asset->tile_s * y);
	else if (asset->map[y][x] == 'P')
	{
		mlx_put_image_to_window(asset->mlx, asset->mlx_win, asset->player_d,
			asset->tile_s * x, asset->tile_s * y);
		asset->x_pos = x;
		asset->y_pos = y;
	}
	else
		mlx_put_image_to_window(asset->mlx, asset->mlx_win, asset->bush,
			asset->tile_s * x, asset->tile_s * y);
}

void	ft_map_init(t_main *asset)
{
	int	x;
	int	y;

	y = 0;
	while (asset->map[y])
	{
		x = 0;
		while (asset->map[y][x])
		{
			ft_img_to_window(asset, x, y);
			x++;
		}
		y++;
	}
}
