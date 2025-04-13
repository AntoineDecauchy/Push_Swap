/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 02:25:29 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/08 02:25:31 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	size_list(t_node *head)
{
	t_node	*tmp_node;
	int		size;

	if (!head)
		return (0);
	tmp_node = head;
	size = 1;
	tmp_node = tmp_node->next;
	while (tmp_node != head)
	{
		size++;
		tmp_node = tmp_node->next;
	}
	return (size);
}

void	free_list(t_node *head)
{
	t_node	*tmp;
	t_node	*next;

	if (!head)
		return ;
	tmp = head->next;
	while (tmp != head)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(head);
}

t_node	*create_stack(char **parse)
{
	t_node	*head;
	int		i;

	i = 1;
	head = new_node(-1, ft_atoi(parse[0]));
	while (parse[i] != NULL)
	{
		add_newnode(-1, ft_atoi(parse[i]), head);
		i++;
	}
	return (head);
}
