/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_goto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:49:48 by akabbouc          #+#    #+#             */
/*   Updated: 2017/10/05 16:49:49 by akabbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_lst	*ft_goto_room(t_lst *room, char *name)
{
	while (room)
	{
		if (!ft_strcmp(room->line, name))
			return (room);
		room = room->next;
	}
	return (room);
}

t_lst	*ft_goto_start(t_lst *room)
{
	while (room)
	{
		if (room->start)
			return (room);
		room = room->next;
	}
	return (room);
}

t_lst	*ft_goto_end(t_lst *room)
{
	while (room)
	{
		if (room->end)
			return (room);
		room = room->next;
	}
	return (room);
}

t_lst	*ft_goto_lastantz(t_lst *way)
{
	while (way->next->next)
	{
		if (!way->next->antz)
			return (way);
		way = way->next;
	}
	return (way);
}
