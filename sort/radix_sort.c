/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 23:02:08 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/13 23:02:10 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	sort(t_node **headA, t_node **headB, int argc)
{
	if (argc == 3)
		sort_two(*headA);
	else
		radix_sort(headA, headB);
}
