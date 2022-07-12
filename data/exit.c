/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:08:00 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/12 15:33:53 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include <stdio.h>

int	ft_exit(t_main *input)
{
	mlx_destroy_window(input->mlx, input->mlx_win);
	exit(0);
}

void	ft_items(t_main *input)
{
	if (input->items == 0)
		ft_exit(input);
}
