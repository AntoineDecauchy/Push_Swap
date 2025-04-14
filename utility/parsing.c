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

char	check_str(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		if ((*str < '0' || *str > '9') && *str != '-' && *str != '+')
		{
			putstr("Error\n");
			return (1);
		}
		if (*str >= '0' && *str <= '9')
			n++;
		str++;
	}
	if (!n)
	{
		putstr("Error\n");
		return (1);
	}
	return (0);
}

char	check(char **parse)
{
	int		i;
	long	n;

	i = 0;
	n = 0;
	while (parse[i])
	{
		if (check_str(parse[i]) == 1)
			return (1);
		i++;
	}
	i = 0;
	while (parse[i])
	{
		n = ft_atoi(parse[i]);
		if (n > INT_MAX || n < INT_MIN)
		{
			putstr("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}

char	check_double(char **parse)
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
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
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
		if (check(parse) || check_double(parse))
		{
			free_parse(parse);
			exit(EXIT_FAILURE);
		}
		return (parse);
	}
	else
	{
		if (check(&argv[1]) || check_double(&argv[1]))
			exit(EXIT_FAILURE);
		return (&argv[1]);
	}
}
