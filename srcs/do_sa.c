/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:25:42 by pitsai            #+#    #+#             */
/*   Updated: 2019/07/20 16:25:43 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sa(t_frame *stacks)
{
    int   tmp;
  
    if (stacks->a && stacks->a != stacks->a->next)
    {
        tmp = stacks = stacks->a->next->data;
        stacks->a->data = stacks->a->next->data;
        stacks->a->next->data-> = tmp;
        add_list(stacks,SA);
    }
}
