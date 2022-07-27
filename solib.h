/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:46:28 by smayrand          #+#    #+#             */
/*   Updated: 2022/07/26 22:10:14 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLIB_H
# define SOLIB_H

# include "./mlx/mlx.h"
# include "./gnl/get_next_line_bonus.h"
# include "./printf/libftprintf.h"

# define IMG_SIZE 64

typedef enum e_tiles {
	GRASS = '0',
	BUSH = '1',
	CHEST = 'C',
	PLAYER = 'P',
	ENEMY = 'Z',
	EXIT = 'E'
}			t_tiles;

typedef struct s_var {
	int	a;
	int	b;
	int	y;
	int	x;
	int	yy;
	int	xx;
	int	i;
	int	j;
}		t_var;

typedef struct s_main {
	void		*mlx;
	void		*mlx_win;
	int			x_win;
	int			y_win;
	int			tile_s;
	char		**map;
	int			x_pos;
	int			y_pos;
	int			tiles;
	int			items;
	int			items_n;
	int			end_n;
	int			start_n;
	int			movecount;
	void		*player_d;
	void		*player_u;
	void		*player_l;
	void		*player_r;
	void		*grass;
	void		*bush;
	void		*item;
	void		*item2;
	void		*end;
	char		**tmp;
}				t_main;

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

void	ft_items(t_main *input);
void	validate_ext(t_main *game, char *file);
void	validate_borders(t_main *game);
void	validate_content(t_main *game);
void	ft_xpm_load(t_main *asset);
void	ft_img_to_window(t_main	*asset, int x, int y);
void	ft_map_init(t_main *asset);
int		key_hook(int keycode, t_main *input);
int		ft_exit(t_main *game, char *msg);
int		ft_toolarge(t_main *game);
int		ft_victory(t_main *game);
void	map_read(t_main *game, char *file);
void	*ft_calloc(size_t count, size_t size);
void	ft_xpm_load(t_main *asset);
void	ft_img_to_window(t_main	*asset, int x, int y);
void	ft_map_init(t_main *asset);

#endif