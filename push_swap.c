/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:11:43 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/06 20:29:15 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	t_node	*premierA;
	t_node	*premierB;
	premierA = new_node(0, ft_atoi(argv[1]));
	premierB = NULL;
	int i = 2;
	while (argv[i] != NULL)
	{
		add_newnode(i-1, ft_atoi(argv[i]), premierA);
		i++;
	}
	t_node *stop = premierA->prev;
	//reverse_rotate_a(premierA);
	push_b(&premierA, &premierB);
	while (premierA != stop)
	{
		printf("%d, %d\n", premierA->value, premierA->index);
		premierA = premierA->next;
	}
	printf("%d, %d\n", premierA->value, premierA->index);
}
