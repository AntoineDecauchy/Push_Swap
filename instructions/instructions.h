/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:32:20 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/07 21:32:21 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include "../push_swap.h"

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

#endif
