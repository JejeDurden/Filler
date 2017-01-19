/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_piece_info.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:58:10 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/19 16:32:21 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

void	ft_get_piece_info(t_info *info, char *line)
{
	int		n;
	int		i;

	n = 6;
	i = 0;
	info->piece_y = ft_atoi(&line[6]);
	while (ft_isdigit(line[n]))
		n++;
	n++;
	info->piece_x = ft_atoi(&line[n]);
	if (!info->piece)
		info->piece = ft_memalloc(sizeof(char *) * info->piece_y);
	while (i < info->piece_y)
	{
		get_next_line(0, &line);
		info->piece[i] = ft_strdup(line);
		i++;
	}
}
