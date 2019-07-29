/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:15:40 by pitsai            #+#    #+#             */
/*   Updated: 2019/07/29 15:15:49 by pitsai           ###   ########.fr       */
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
