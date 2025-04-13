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
	printf("Pile A initiale :\n");
    t_node *tmp = head_a;
    do {
        printf("%d, %d\n", tmp->value, tmp->index);
        tmp = tmp->next;
    } while (tmp != head_a);
	sort_index(head_a);
	printf("Pile A initiale :\n");
    tmp = head_a;
    do {
        printf("%d, %d\n", tmp->value, tmp->index);
        tmp = tmp->next;
    } while (tmp != head_a);
	sort(&head_a, &head_b, argc);
	printf("Pile A trier :\n");
    tmp = head_a;
    do {
        printf("%d, %d\n", tmp->value, tmp->index);
        tmp = tmp->next;
    } while (tmp != head_a);
	free_list(head_a);
	return (0);
}
