/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 21:07:48 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/06 21:07:51 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_node *headA)
{
	int		tmp_value;
	int		tmp_index;
	t_node	*tmp_node;

	tmp_value = 0;
	tmp_index = 0;
	tmp_node = headA;
	if (headA == NULL)
		return ;
	while (headA != tmp_node->prev)
	{
		tmp_value = headA->value;
		headA->value = headA->next->value;
		headA->next->value = tmp_value;
		headA = headA->next;
	}
	headA = tmp_node;
	while (headA != tmp_node->prev)
	{
		headA->index = tmp_index;
		tmp_index++;
		headA = headA->next;
	}
	putstr("ra\n");
}
