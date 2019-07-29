/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:25:47 by pitsai            #+#    #+#             */
/*   Updated: 2019/07/29 15:15:55 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
