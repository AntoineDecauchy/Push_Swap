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

void	radix_sort(t_node **headA, t_node **headB)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	size = size_list(*headA);
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*headA)->index >> i) & 1)
				rotate_a(*headA);
			else
				push_b(headA, headB);
			j++;
		}
		while (*headB)
			push_a(headA, headB);
		i++;
	}
}
