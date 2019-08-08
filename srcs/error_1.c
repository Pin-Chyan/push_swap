/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:07:09 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/08 23:10:37 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		free_moves(t_frame *stacks)
{
	t_moves		*tmp;

	if (stacks->move)
	{
		while (stacks->move != stacks->move->next)
		{
			tmp = stacks->moves->next;
			delete_moves(stacks,stacks->moves);
			stacks->moves = tmp;
		}
		delete_moves(stacks, stacks->moves);
	}
	stacks->move = NULL;
}

