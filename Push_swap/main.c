#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		count;
	int		index;
	int		*data;

	index = 0;
	count = argc - 1;
	data = (int*)malloc(argc - 1);
	while (index < argc - 1)
	{
		if (ft_atoi(argv[count])) 
		{
			data[index] = ft_atoi(argv[count]);
			index++;
			count--;
		}
		else
		{
			ft_putendl_fd("Error", 2);
			return (-1);
		}
	}
	check_duplicates(data, index);
	do_push_swap(data, index);
	return (0);
}
