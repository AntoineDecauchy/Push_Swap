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
	t_node	*headA;
	t_node	*headB;
	char **parse;

	headB = NULL;
	printf("oklm\n");
	parse = parsing(argc, argv);
	int i = 0;
	while(parse[i])
	{
		printf("%s\n", parse[i]);
		i++;
	}
	headA = create_stack(parse);
	if (!argv[2])
		free_parse(parse);
	sort_index(headA);
	radix_sort(&headA, &headB);
	free_list(headA);
	return (0);
}
