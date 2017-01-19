/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:21:40 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/19 13:40:24 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

void	ft_place_piece(t_info *info)
{
	if (info->noplace == 1)
		info->gameover = 1;
	else
	{
		ft_putnbr(12);
		ft_putchar(' ');
		ft_putnbr(14);
		ft_putchar('\n');
	}
}
