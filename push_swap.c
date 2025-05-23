/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 21:16:09 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/13 21:17:07 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	char	**parse;

	head_b = NULL;
	parse = parsing(argc, argv);
	head_a = create_stack(parse);
	if (!argv[2])
		free_parse(parse);
	sort_index(head_a);
	sort(&head_a, &head_b);
	free_list(head_a);
	return (0);
}
