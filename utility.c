#include "push_swap.h"

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

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
