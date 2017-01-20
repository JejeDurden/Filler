/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:21:40 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/20 10:59:39 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

void	ft_place_piece(t_info *info)
{
	if (info->strat == 0)
		info->strat = 3;
	else if (info->strat == 1)
		info->strat = 2;
	else if (info->strat == 2)
		info->strat = 1;
	else if (info->strat == 3)
		info->strat = 0;
	if (info->noplace == 1)
	{
		info->gameover = 1;
		ft_putnbr(info->y);
		ft_putchar(' ');
		ft_putnbr(info->x);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(info->y);
		ft_putchar(' ');
		ft_putnbr(info->x);
		ft_putchar('\n');
	}
}
