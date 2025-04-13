/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:05:34 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/11 00:05:36 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_index(t_node *head)
{
	int		index;
	int		size;
	int		i;
	t_node	*tmp;
	t_node	*min;

	size = size_list(head);
	index = 0;
	while (index < size)
	{
		min = NULL;
		tmp = head;
		i = 0;
		while (i < size)
		{
			if (tmp->index == -1 && (!min || tmp->value < min->value))
				min = tmp;
			tmp = tmp->next;
			i++;
		}
		min->index = index;
		index++;
	}
}


