/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:17:59 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/19 17:09:34 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

static void		ft_get_enemy_pos(t_info *info)
{
	int		i;
	int		j;

	i = 0;
	info->enemy_letter = (info->letter == 'O') ? 'X' : 'O';
	while (i < info->mapy)
	{
		j = 0;
		while (j < info->mapx)
		{
			if (info->map[i][j] == info->enemy_letter)
			{
				info->enemy_pos_x = j;
				info->enemy_pos_y = i;
			}
			if (info->map[i][j] == info->letter)
			{
				info->my_pos_x = j;
				info->my_pos_y = i;
			}
			j++;
		}
		i++;
	}
	info->strat = (info->enemy_pos_y > info->my_pos_y) ? 1 : 0;
}

void			ft_get_map_info(t_info *info)
{
	char	*line;
	int		i;

	i = 0;
	if (!info->map)
		info->map = ft_memalloc(sizeof(char *) * info->mapy);
	get_next_line(0, &line);
	while (i <= info->mapy)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			info->map[i] = ft_strdup(line + 4);
		else
			ft_get_piece_info(info, line);
		i++;
	}
	if (info->enemy_pos_x == 0 && info->enemy_pos_y == 0 &&
			info->my_pos_x == 0 && info->my_pos_y == 0)
		ft_get_enemy_pos(info);
}
