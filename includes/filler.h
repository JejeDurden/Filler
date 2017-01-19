/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 09:50:30 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/19 13:26:04 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

typedef struct	s_struct
{
	char	letter;
	int		mapx;
	int		mapy;
	char	**map;
	int		enemy_pos_x;
	int		enemy_pos_y;
	int		my_pos_x;
	int		my_pos_y;
	int		target1_x;
	int		target1_y;
	int		target2_x;
	int		target2_y;
	int		piece_x;
	int		piece_y;
	char	**piece;
	int		gameover;
	int		noplace;
}				t_info;

void	ft_get_map_info(t_info *info);
void	ft_get_piece_info(t_info *info, char *line);
void	ft_place_piece(t_info *info);
