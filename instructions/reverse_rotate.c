/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 21:07:48 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/06 21:07:51 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_node *head)
{
	int		tmp_value;
	int		tmp_index;
	t_node	*tmp_node;

	tmp_value = 0;
	tmp_index = 0;
	tmp_node = head;
	while (head != tmp_node->next)
	{
		tmp_value = head->value;
		head->value = head->prev->value;
		head->prev->value = tmp_value;
		head = head->prev;
	}
	head = tmp_node;
	update_index(head);
}

void	reverse_rotate_a(t_node *headA)
{
	if (headA == NULL)
		return ;
	reverse_rotate(headA);
	putstr("rra\n");
}

void	reverse_rotate_b(t_node *headB)
{
	if (headB == NULL)
		return ;
	reverse_rotate(headB);
	putstr("rrb\n");
}

void	reverse_rotate_r(t_node *headA, t_node *headB)
{
	if (headA == NULL && headB == NULL)
		return ;
	if (headA != NULL)
		reverse_rotate(headA);
	if (headB != NULL)
		reverse_rotate(headB);
	putstr("rrr\n");
}
