/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:15:40 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/05 16:55:18 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_list(t_frame *stacks, int move)
{
	 t_moves *new;

	if(!(new = (t_moves*)malloc(sizeof(*new))))
		exit;
	new->move = move;
	new->next = new;
	new->prev = new;
	stacks->move = new;
}

void	delete_moves(t_frame *stack, t_moves *moves)
{
}
