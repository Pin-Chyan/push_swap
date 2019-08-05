/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 16:09:03 by pitsai            #+#    #+#             */
/*   Updated: 2019/08/05 15:21:36 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct		s_list
{
	int				data;
	struct s_clist	*next;
	struct s_clist	*prev;
}					t_list;

typedef struct		s_moves
{
	int				move:8;
	struct s_move	*next;
	struct s_move	*prev;
}					t_moves;

// Stacks *A & *B

typedef struct		s_frame
{
	t_list			*a;
	t_list			*b;
	t_moves			*moves;
	short			flags;
	short			p;
}					t_frame;

// Operations

void				ft_sa(t_frame *stack);
void				ft_sb(t_frame *stack);
void				ft_ss(t_frame *stack);

void				ft_pa(t_frame *stack);
void				ft_pb(t_frame *stack);

void				ft_ra(t_frame *stack);
void				ft_rb(t_frame *stack);
void				ft_rr(t_frame *stack);

void				ft_rra(t_frame *stack);
void				ft_rrb(t_frame *stack);
void				ft_rrr(t_frame *stack);

void				error_exit(void);
