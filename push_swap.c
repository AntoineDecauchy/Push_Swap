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

int main(int argc, char **argv)
{
    if (argc == 1)
        return (1);
    t_node *premierA;
    t_node *premierB;
    char **split = ft_split(argv[1], ' ');
    premierA = new_node(-1, ft_atoi(split[0]));
    premierB = NULL;

    int i = 1;
    while (split[i] != NULL)
    {
        add_newnode(-1, ft_atoi(split[i]), premierA);
        i++;
    }
    sort_index(premierA);
    printf("Pile A initiale :\n");
    //t_node *stop = premierA->prev;
    t_node *tmp = premierA;
    do {
        printf("%d, %d\n", tmp->value, tmp->index);
        tmp = tmp->next;
    } while (tmp != premierA);
	if (argc == 3)
		sort_two(premierA);
    radix_sort(&premierA, &premierB);
	//swap_a(premierA);
    //push_b(&premierA, &premierB);
	//push_b(&premierA, &premierB);
	//push_b(&premierA, &premierB);
	//rotate_r(premierA, premierB);
	//reverse_rotate_r(premierA, premierB);
	//swap_a(premierA);
	//push_a(&premierA, &premierB);
	//push_a(&premierA, &premierB);
	//push_a(&premierA, &premierB);
	printf("size = %d\n", size_list(premierA));
    printf("Après tri:\n");
    printf("Pile A :\n");
    if (premierA)
    {
        tmp = premierA;
        do {
            printf("%d, %d\n", tmp->value, tmp->index);
            tmp = tmp->next;
        } while (tmp != premierA);
    }
    else
        printf("Pile A vide\n");

    printf("Pile B :\n");
    if (premierB)
    {
        tmp = premierB;
        do {
            printf("%d, %d\n", tmp->value, tmp->index);
            tmp = tmp->next;
        } while (tmp != premierB);
    }
	else
		printf("Pile B vide\n");
	free_list(premierA);
	return (0);
}
