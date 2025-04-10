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

#include "../push_swap.h"

void	rotate(t_node *head)
{
	int		tmp_value;
	int		tmp_index;
	t_node	*tmp_node;

	tmp_value = 0;
	tmp_index = 0;
	tmp_node = head;
	while (head != tmp_node->prev)
	{
		tmp_value = head->value;
		head->value = head->next->value;
		head->next->value = tmp_value;
		tmp_index = head->index;
		head->index = head->next->index;
		head->next->index = tmp_index;
		head = head->next;
	}
}

void	rotate_a(t_node *headA)
{
	if (headA == NULL)
		return ;
	rotate(headA);
	putstr("ra\n");
}

void	rotate_b(t_node *headB)
{
	if (headB == NULL)
		return ;
	rotate(headB);
	putstr("rb\n");
}

void	rotate_r(t_node *headA, t_node *headB)
{
	if (headA == NULL && headB == NULL)
		return ;
	if (headA != NULL)
		rotate(headA);
	if (headB != NULL)
		rotate(headB);
	putstr("rr\n");
}
