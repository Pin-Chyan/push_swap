/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:22:04 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/09 00:36:12 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	remove_elem(t_list **head, t_list *elem)
{
	if ((*head)->next = *head)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		elem->prev->next = elem->next;
		elem->next->prev = elem->prev;
		free(elem);
	}
}

void	remove_head(t_list **head)
{
	t_list	*tmp;

	if(!(*head))
		return ;
	tmp = (*head)->next;
	if ((*head)->next == *head)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
		*head = tmp;
	}
}
