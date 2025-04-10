/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:46:13 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/06 20:46:19 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node *head)
{
	int	tmp_value;
	int	tmp_index;

	tmp_value = head->value;
	tmp_index = head->index;
	head->value = head->next->value;
	head->next->value = tmp_value;
	head->index = head->next->index;
	head->next->index = tmp_index;
}

void	swap_a(t_node *headA)
{
	if (headA == NULL)
		return ;
	swap(headA);
	putstr("sa\n");
}

void	swap_b(t_node *headB)
{
	if (headB == NULL)
		return ;
	swap(headB);
	putstr("sa\n");
}

void	swap_s(t_node *headA, t_node *headB)
{
	if (headA == NULL && headB == NULL)
		return ;
	if (headA != NULL)
		swap(headA);
	if (headB != NULL)
		swap(headB);
	putstr("ss\n");
}
