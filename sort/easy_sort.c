/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:18:26 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/07 21:18:29 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_node *head)
{
	if (head->value > head->next->value)
		swap_a(head);
}

void	sort_three(t_node *head)
{
	int	a;
	int	b;
	int	c;

	a = head->value;
	b = head->next->value;
	c = head->next->next->value;
	if (a < b && b < c)
		return ;
	else if (a > b && a < c)
		swap_a(head);
	else if (a > b && b > c)
	{
		swap_a(head);
		reverse_rotate_a(head);
	}
	else if (a > b && b < c && a > c)
		rotate_a(head);
	else if (a < b && b > c && a < c)
	{
		swap_a(head);
		rotate_a(head);
	}
	else if (a < b && b > c && a > c)
		reverse_rotate_a(head);
}

void	sort_four(t_node **headA, t_node **headB)
{
	while ((*headA)->index != 0)
		rotate_a(*headA);
	push_b(headA, headB);
	sort_three(*headA);
	push_a(headA, headB);
}

void	sort_five(t_node **headA, t_node **headB)
{
	while ((*headA)->index != 0)
		rotate_a(*headA);
	push_b(headA, headB);
	while ((*headA)->index != 1)
		rotate_a(*headA);
	push_b(headA, headB);
	sort_three(*headA);
	push_a(headA, headB);
	push_a(headA, headB);
}
