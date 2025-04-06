#include "push_swap.h"

void	swap(t_node *A, t_node *B, char s)
{
	int	tmp;

	if (s == 'a')
	{
		if (A == NULL)
			return;
		tmp = A->value;
		A->value = A->next->value;
		A->next->value = tmp;
		putstr("sa\n");
	}
