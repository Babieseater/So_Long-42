/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:46:28 by smayrand          #+#    #+#             */
/*   Updated: 2022/06/15 15:14:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLIB_H
# define SOLIB_H

# include "./mlx/mlx.h"
# include "./GNL/get_next_line_bonus.h"
# include "./printf/libftprintf.h"

# define IMG_SIZE 64

typedef struct s_main {
	void	*mlx;
	void	*win;
}			t_main;

typedef struct s_data {
	void	*img;
	char	*address;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_data;

enum {
	ON_KEYPRESS = 2,
	ON_DESTROY = 17
};

enum {
	KEY_W = 13,
	KEY_A = 0,
	KEY_S = 1,
	KEY_D = 2,
	KEY_ESC = 53,
	
};

int	ft_exit(t_main *game);
int	key_hook(int keycode, t_main *input);

#endif