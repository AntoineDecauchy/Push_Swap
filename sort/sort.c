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
	t_node	*tmp_node;
	t_node	*min_node;

	size = size_list(head);
	index = 0;
	while (index < size)
	{
		min_node = NULL;
		tmp_node = head;
		while(tmp_node)
		{
			if (tmp_node->index == -1 && (!min_node || tmp_node->value < min_node->value))
				min_node = tmp_node;
		}
		if (min_node)
		{
			min_node->index = index;
			index++;
		}
	}
}
