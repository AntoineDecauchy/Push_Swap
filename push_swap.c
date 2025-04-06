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

int	ft_atoi(const char *str)
{
	size_t	i;
	int		nb;
	int		np;

	i = 0;
	nb = 0;
	np = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			np *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * np);
}

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
	rotate_r(premierA, premierB);
	while (premierA != stop)
	{
		printf("%d, %d\n", premierA->value, premierA->index);
		premierA = premierA->next;
	}
	printf("%d, %d\n", premierA->value, premierA->index);
}
