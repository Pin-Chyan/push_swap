/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adding.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:27:33 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/09 00:34:40 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add_to_top(t_list **head, int data, t_frame *stacks)
{
	t_list *new;

	if(!(new = t_list*)malloc(sizeof(*new)))
		exit;
	new->data = data;
	new->next = *head;
	new->prev = (*head)->prev;
	(*head)->prev->next = new;
	(*head)->prev = new;
	*head = new;
}

void	add_to_tail(t_list *head, int data, t_frame *stacks)
{
	t_list *new;

	if(!(new = t_list*)malloc(sizeof(*new)))
		exit;
	new->data = data;
	new->next = head;
	new->prev = (head->next == head) ? head : head->prev;
	head->prev->next = new;
	head->prev = new;
	nex->prev->next = new;
}
