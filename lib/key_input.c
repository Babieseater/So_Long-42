/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 06:19:09 by smayrand          #+#    #+#             */
/*   Updated: 2022/06/15 14:48:23 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../solib.h"
#include "../mlx/mlx.h"
#include <stdio.h>


int	key_hook(int keycode, t_main *input)
{
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(input->mlx, input->win);
		exit(0);	
	}	
	else if (keycode == KEY_W)
	printf("Key pressed:%d\n", keycode);
	else if (keycode == KEY_A)
	printf("Key pressed:%d\n", keycode);
	else if (keycode == KEY_S)
	printf("Key pressed:%d\n", keycode);
	else if (keycode == KEY_D)
	printf("Key pressed:%d\n", keycode);
	else
	printf("Key pressed is invalid. Keycode:%d\n", keycode);
	return (0);
}

/*
	13 = W
	0 = A
	1 = S
	2 = D
	53 = ESC 
*/