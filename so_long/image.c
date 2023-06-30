/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:16:16 by injsong           #+#    #+#             */
/*   Updated: 2023/06/30 14:50:35 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_image(t_image *image, t_game *game)
{
	int		width_height;

	width_height = 64;
	image->wall = mlx_xpm_file_to_image(\
		game->mlx, "./res/wall.xpm", &width_height, &width_height);
	image->floor = mlx_xpm_file_to_image(\
		game->mlx, "./res/floor.xpm", &width_height, &width_height);
	image->pill = mlx_xpm_file_to_image(\
		game->mlx, "./res/pill.xpm", &width_height, &width_height);
	image->door = mlx_xpm_file_to_image(\
		game->mlx, "./res/door.xpm", &width_height, &width_height);
	image->left = mlx_xpm_file_to_image(\
		game->mlx, "./res/left.xpm", &width_height, &width_height);
	image->right = mlx_xpm_file_to_image(\
		game->mlx, "./res/right.xpm", &width_height, &width_height);
	image->front = mlx_xpm_file_to_image(\
		game->mlx, "./res/front.xpm", &width_height, &width_height);
	image->back = mlx_xpm_file_to_image(\
		game->mlx, "./res/back.xpm", &width_height, &width_height);
}

void	set_image(t_game *game, void *image, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, image, x, y);
}
