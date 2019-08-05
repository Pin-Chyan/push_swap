//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:26:55 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/05 15:19:33 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_frame *stacks)
{
	int tmp;

	if(stacks->a && stacks->a != stacks->a->next)
	{
		tmp = stacks = stacks->a->next->data;
		stacks->a->data = stacks->a->next->data;
		stacks->a->next->data-> = tmp;
		add_list(stacks,SA);
	}
}

void	sb(t_frame *stacks)
{
	int tmp;

	if(stacks->b && stacks->b != stacks->b->next)
	{
		tmp = stacks = stacks->b->next->data;
		stacks->b->data = stacks->b->next->data;
		stacks->b->next->data-> = tmp;
		add_list(stacks,SB);
	}
}

void	ss(t_frame *stacks)
{
	sa(stacks);
	sb(stacks);
}
