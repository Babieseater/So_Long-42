/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:08:00 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/26 16:51:51 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include <stdio.h>

void	free_ptr(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	ft_victory(t_main *input)
{
	mlx_destroy_window(input->mlx, input->mlx_win);
	free_ptr(input->map);
	ft_printf("%s\n", "YOU MADE IT THROUGH THE BUSHES OF LOVE!");
	exit(0);
}

int	ft_exit(t_main *input)
{
	mlx_destroy_window(input->mlx, input->mlx_win);
	free_ptr(input->map);
	exit(0);
}

int	ft_toolarge(t_main *input)
{
	mlx_destroy_window(input->mlx, input->mlx_win);
	free_ptr(input->map);
	ft_printf("%s", "Error\nMap file too large\n");
	exit(0);
}

void	ft_items(t_main *input)
{
	if (input->items == 0)
	{
		input->movecount++;
		if (input->movecount == 69)
			ft_printf("%d NICE! ;)\n", input->movecount);
		else
			ft_printf("Moves : %d\n", input->movecount);
		ft_victory(input);
	}
}
