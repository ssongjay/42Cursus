/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:23:10 by injsong           #+#    #+#             */
/*   Updated: 2023/06/29 21:33:36 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "./mlx/mlx.h"
# include "./get_next_line/get_next_line.h"
# include "./ft_printf/ft_printf.h"

# define X_EVENT_KEY_PRESS 2
# define X_EVENT_KEY_EXIT 17

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

typedef struct s_point {
	int	x;
	int	y;
}t_point;

typedef struct s_game
{
	char	*file_name;
	void	*mlx;
	void	*win;
	char	**map;
	int		num_collectibles;
	int		move_cnt;
	int		c_cnt;
}t_game;

typedef struct s_image {
	void	*wall;
	void	*floor;
	void	*pill;
	void	*door;
	void	*left;
	void	*right;
	void	*front;
	void	*back;
}t_image;

#endif