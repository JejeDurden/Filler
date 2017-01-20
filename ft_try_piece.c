/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_try_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:05:11 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/20 10:54:38 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

static int		ft_check_me(t_info *info, int i, int j)
{
	int		superpose;
	int		y;
	int		x;

	superpose = 0;
	y = 0;
	while (y < info->piece_y)
	{
		x = 0;
		while (x < info->piece_x)
		{
			if ((info->map[i + y][j + x] == info->letter ||
				info->map[i + y][j + x] == info->letter + 32)
					&& info->piece[y][x] == '*')
				superpose++;
			if ((info->map[i + y][j + x] == info->enemy_letter ||
				info->map[i + y][j + x] == info->enemy_letter + 32)
					&& info->piece[y][x] == '*')
				return (0);
			x++;
		}
		y++;
	}
	return ((superpose == 1) ? 1 : 0);
}

int				ft_try_piece(t_info *info, int i, int j)
{
	if (i + info->piece_y > info->mapy)
		return (0);
	else if (j + info->piece_x > info->mapx)
		return (0);
	else
		return (ft_check_me(info, i, j));
}
