#include <unistd.h>

void	add_to_top(t_list **head, int data, t_frame stacks)
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
