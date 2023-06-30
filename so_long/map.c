/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:13:27 by injsong           #+#    #+#             */
/*   Updated: 2023/06/30 14:16:31 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_game *game, char *file_name)
{
	game->file_name = file_name;
	game->map = NULL;
	game->mlx = NULL;
	game->win = NULL;
	game->move_cnt = 0;
	game->c_cnt = 0;
}

