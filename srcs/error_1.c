/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:07:09 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/09 00:39:05 by pitsai           ###   ########.fr       */
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

void		free_stacks(t_frame *stacks)
{
	t_list	*tmp;

	if (stacks->a)
	{
		while (stacks->a != stacks->a->next)
		{
			tmp = stacks = stacks->a->next;
			remove_head(&(stacks->a));
			stacks->a = tmp;
		}
		remove_head (&(stacks->a));
		stacks->a = tmp;
	}
	if (stacks->b)
	{
		while (stacks->b != stacks->b->next)
		{
			tmp = stacks = stacks->b->next;
			remove_head(&(stacks->b));
			stacks->b = tmp;
		}
		remove_head (&(stacks->b));
		stacks->b = tmp;
	}
}

void		error_exit(t_frame *stacks)
{
	free_stacks(stacks);
	free(stacks);
	exit (0);
}
