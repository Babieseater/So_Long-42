/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 06:19:09 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/08 16:35:05 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include <stdio.h>

void	ft_down(t_main *input)
{
	if (input->map[input->y_pos][(input->x_pos) + 1] == 'E')
	{
		if (input->items == 0)
			ft_exit(input);
	}
	else if (ft_strchr("CP0",
			input->map[input->y_pos][(input->x_pos) + 1]) != 0)
	{
		if (input->map[input->y_pos][(input->x_pos) + 1] == 'C')
			input->items -= 1;
		else
		{
			input->map[input->y_pos][input->x_pos] = '0';
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->grass, input->y_pos * 64, input->x_pos++ *64);
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->player_d, input->y_pos * 64, input->x_pos * 64);
			input->movecount++;
			ft_printf("Moves : %d\n", input->movecount);
		}
	}
}

void	ft_up(t_main *input)
{
	if (input->map[input->y_pos][(input->x_pos) - 1] == 'E')
	{
		if (input->items == 0)
			ft_exit(input);
	}
	else if (ft_strchr("CP0",
			input->map[input->y_pos][(input->x_pos) - 1]) != 0)
	{
		if (input->map[input->y_pos][(input->x_pos) - 1] == 'C')
			input->items -= 1;
		else
		{
			input->map[input->y_pos][input->x_pos] = '0';
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->grass, input->y_pos * 64, input->x_pos-- *64);
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->player_d, input->y_pos * 64, input->x_pos * 64);
			input->movecount++;
			ft_printf("Moves : %d\n", input->movecount);
		}
	}
}

void	ft_left(t_main *input)
{
	if (input->map[(input->y_pos) - 1][input->x_pos] == 'E')
	{
		if (input->items == 0)
			ft_exit(input);
	}
	else if (ft_strchr("CP0",
			input->map[(input->y_pos) - 1][input->x_pos]) != 0)
	{
		if (input->map[(input->y_pos) - 1][input->x_pos] == 'C')
			input->items -= 1;
		else
		{
			input->map[input->y_pos][input->x_pos] = '0';
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->grass, input->y_pos-- * 64, input->x_pos * 64);
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->player_d, input->y_pos * 64, input->x_pos * 64);
			input->movecount++;
			ft_printf("Moves : %d\n", input->movecount);
		}
	}
}

void	ft_right(t_main *input)
{
	if (input->map[(input->y_pos) + 1][input->x_pos] == 'E')
	{
		if (input->items == 0)
			ft_exit(input);
	}
	else if (ft_strchr("CP0",
			input->map[(input->y_pos) + 1][input->x_pos]) != 0)
	{
		if (input->map[(input->y_pos) + 1][input->x_pos] == 'C')
			input->items -= 1;
		else
		{
			input->map[input->y_pos][input->x_pos] = '0';
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->grass, input->y_pos++ * 64, input->x_pos * 64);
			mlx_put_image_to_window(input->mlx, input->mlx_win,
				input->player_d, input->y_pos * 64, input->x_pos * 64);
			input->movecount++;
			ft_printf("Moves : %d\n", input->movecount);
		}
	}
}

int	key_hook(int keycode, t_main *input)
{
	if (keycode == KEY_ESC)
		ft_exit(input);
	else if (keycode == KEY_W)
		ft_up(input);
	else if (keycode == KEY_A)
		ft_left(input);
	else if (keycode == KEY_S)
		ft_down(input);
	else if (keycode == KEY_D)
		ft_right(input);
	else
		ft_printf("Key pressed is invalid. Keycode:%d\n", keycode);
	return (0);
}
