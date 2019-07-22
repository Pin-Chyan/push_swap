/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:54:34 by pitsai            #+#    #+#             */
/*   Updated: 2019/06/15 11:11:25 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	tmp;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
		i++;
	tmp = (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	if (tmp > 0)
		return (1);
	else if (tmp < 0)
		return (-1);
	else
		return (tmp);
}
