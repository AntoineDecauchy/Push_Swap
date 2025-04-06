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

void	swap_a(t_node *headA)
{
	int	tmp;

	tmp = 0;
	if (headA == NULL)
		return ;
	tmp = headA->value;
	headA->value = headA->next->value;
	headA->next->value = tmp;
	putstr("sa\n");
}

void	swap_b(t_node *headB)
{
	int	tmp;

	tmp = 0;
	if (headB == NULL)
		return ;
	tmp = headB->value;
	headB->value = headB->next->value;
	headB->next->value = tmp;
	putstr("sa\n");
}

void	swap_s(t_node *headA, t_node *headB)
{
	int	tmp;

	tmp = 0;
	if (headA == NULL && headB == NULL)
		return ;
	if (headA != NULL)
	{
		tmp = headA->value;
		headA->value = headA->next->value;
		headA->next->value = tmp;
	}
	if (headB != NULL)
	{
		tmp = headB->value;
		headB->value = headB->next->value;
		headB->next->value = tmp;
	}
	putstr("ss\n");
}
