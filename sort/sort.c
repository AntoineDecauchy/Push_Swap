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

int	find_min_index(t_node *head)
{
	t_node	*tmp_node;
	int		index;

	index = head->index;
	tmp_node = head->next;
	while (tmp_node != head)
	{
		if (index > tmp_node->index)
			index = tmp_node->index;
		tmp_node = tmp_node->next;
	}
	return (index);
	printf("salutaions\n");
}

char	check_index_order(t_node *head)
{
	t_node	*tmp_node;

	tmp_node = head;
	while (tmp_node->next != head)
	{
		if (tmp_node->index > tmp_node->next->index)
			return (1);
		tmp_node = tmp_node->next;
	}
	return (0);
}

void	sort(t_node **headA, t_node **headB, int argc)
{
	if (argc == 3)
		sort_two(*headA);
	else if (argc == 4)
		sort_three(*headA);
	else if (argc == 5)
	{
		if (check_index_order(*headA))
			sort_four(headA, headB);
	}
	else if (argc == 6)
	{
		if (check_index_order(*headA))
			sort_five(headA, headB);
	}
	else
	{
		if (check_index_order(*headA))
			radix_sort(headA, headB);
	}
}
