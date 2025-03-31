/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:47:26 by adecauch          #+#    #+#             */
/*   Updated: 2025/03/31 14:33:10 by adecauch         ###   ########.fr       */
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

#endif
