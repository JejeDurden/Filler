/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 09:47:56 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/19 18:11:25 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

int		main(void)
{
	char	*line;
	t_info	*info;

	if (!(info = ft_memalloc(sizeof(t_info))))
		return (-1);
	get_next_line(0, &line);
	info->letter = (ft_atoi(line + 10) == 1) ? 'O' : 'X';
	while (42)
	{
		get_next_line(0, &line);
		info->mapy = ft_atoi(&line[8]);
		info->mapx = ft_atoi(&line[11]);
		ft_get_map_info(info);
		if (ft_strategie(info) == 0)
			info->noplace = 1;
		ft_place_piece(info);
		if (info->gameover == 1)
			break ;
	}
	return (0);
}
