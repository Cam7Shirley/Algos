#include "push_swap.h"

int	check_duplicates(int *d, int n)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = 1;
	while (index1 < n)
	{
		while (index2 < n - 1)
		{
			if (d[index1] == d[index2])
				return (1);
			index2++;
		}
		index1++;
		index2 = index1 + 1;
	}
	return (0);
}
