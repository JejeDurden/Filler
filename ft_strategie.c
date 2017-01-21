/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategie.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:12:17 by jdesmare          #+#    #+#             */
/*   Updated: 2017/01/20 17:03:36 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/filler.h"

static int		ft_strategy_down_left(t_info *info)
{
	int		i;
	int		j;

	i = info->mapy;
	while (i > 0)
	{
		j = 0;
		while (j < info->mapx)
		{
			if (ft_try_piece(info, i, j) == 1)
			{
				info->x = j;
				info->y = i;
				return (1);
			}
			j++;
		}
		i--;
	}
	return (0);
}

static int		ft_strategy_up_right(t_info *info)
{
	int		i;
	int		j;

	i = 0;
	while (i < info->mapy)
	{
		j = info->mapx;
		while (j > 0)
		{
			if (ft_try_piece(info, i, j) == 1)
			{
				info->x = j;
				info->y = i;
				return (1);
			}
			j--;
		}
		i++;
	}
	return (0);
}

static int		ft_strategy_down_right(t_info *info)
{
	int		i;
	int		j;

	i = info->mapy;
	while (i > 0)
	{
		j = info->mapx;
		while (j > 0)
		{
			if (ft_try_piece(info, i, j) == 1)
			{
				info->x = j;
				info->y = i;
				return (1);
			}
			j--;
		}
		i--;
	}
	return (0);
}

static int		ft_strategy_up_left(t_info *info)
{
	int		i;
	int		j;

	i = 0;
	while (i < info->mapy)
	{
		j = 0;
		while (j < info->mapx)
		{
			if (ft_try_piece(info, i, j) == 1)
			{
				info->x = j;
				info->y = i;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int				ft_strategie(t_info *info)
{
	if (info->strat == 0)
		return (ft_strategy_up_left(info));
	else if (info->strat == 1)
		return (ft_strategy_down_right(info));
	else if (info->strat == 2)
		return (ft_strategy_up_right(info));
	else if (info->strat == 3)
		return (ft_strategy_down_left(info));
	else
		return (0);
}
