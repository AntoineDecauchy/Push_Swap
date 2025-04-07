/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:47:26 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/06 20:25:58 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct node
{
	int			index;
	int			value;
	struct node	*next;
	struct node	*prev;
}				t_node;

t_node	*new_node(int index, int value);
void	add_newnode(int index, int value, t_node *first);
t_node	*remove_node(t_node **head);
void	insert_node(t_node **head, t_node *node);
void	update_index(t_node *head);

void	swap_a(t_node *headA);
void	swap_b(t_node *headB);
void	swap_s(t_node *headA, t_node *headB);

void	push_a(t_node **headA, t_node **headB);
void	push_b(t_node **headA, t_node **headB);

void	rotate_a(t_node *headA);
void	rotate_b(t_node *headB);
void	rotate_r(t_node *headA, t_node *headB);

void	reverse_rotate_a(t_node *headA);
void	reverse_rotate_b(t_node *headB);
void	reverse_rotate_r(t_node *headA, t_node *headB);

void	sort_two(t_node *head);

void	putstr(char *str);
int	ft_atoi(const char *str);

#endif
