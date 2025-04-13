/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 00:18:14 by adecauch          #+#    #+#             */
/*   Updated: 2025/04/13 19:30:54 by adecauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_str(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		if ((*str < '0' || *str > '9') && *str != '-' && *str != '+')
		{
			putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		if (*str >= '0' && *str <= '9')
			n++;
		str++;
	}
	if (!n)
	{
		putstr("Error\n");
		exit(EXIT_FAILURE);
	}
}

void	check(char **parse)
{
	int		i;
	long	n;

	i = 0;
	n = 0;
	while (parse[i])
	{
		check_str(parse[i]);
		i++;
	}
	i = 0;
	while (parse[i])
	{
		n = ft_atoi(parse[i]);
		if (n > INT_MAX || n < INT_MIN)
		{
			putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_double(char **parse)
{
	int		i;
	int		j;
	long	n;

	i = 0;
	n = 0;
	while (parse[i])
	{
		j = 0;
		n = ft_atoi(parse[i]);
		while (parse[j])
		{
			if (j != i && n == ft_atoi(parse[j]))
			{
				putstr("Error\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

char	**parsing(int argc, char **argv)
{
	char	**parse;

	parse = NULL;
	if (argc == 1)
		exit(EXIT_FAILURE);
	if (!argv[2])
	{
		parse = ft_split(argv[1], ' ');
		check(parse);
		check_double(parse);
		return (parse);
	}
	else
	{
		check(&argv[1]);
		check_double(&argv[1]);
		return (&argv[1]);
	}
}
