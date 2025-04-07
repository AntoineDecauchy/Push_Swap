/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 23:01:36 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/06 23:01:39 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_node **headA, t_node **headB)
{
	t_node	*node;

	node = remove_node(headB);
	if (!node)
		return ;
	insert_node(headA, node);
	update_index(*headA);
	if (*headB)
		update_index(*headB);
	putstr("pa\n");
}

void	push_b(t_node **headA, t_node **headB)
{
	t_node	*node;

	node = remove_node(headA);
	if (!node)
		return ;
	insert_node(headB, node);
	update_index(*headB);
	if (*headA)
		update_index(*headA);
	putstr("pb\n");
}
