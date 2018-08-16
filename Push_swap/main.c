#include "push_swap.h"

int	main(int argc, char **argv)
{
	unsigned int	count;
	unsigned int	index;
	int		*data;
	int		err;
	t_stack		stk_a;
	t_stack		stk_b;

	if (argc > 1)
	{
		index = 0;
		count = argc - 1;
		data = (int*)malloc(argc - 1);
		stk_a = new_stack(argc - 1);
		stk_b = new_stack(argc - 1);
		while (count > 0)
		{
			if (ft_atoi(argv[count])) 
			{
				data[index] = ft_atoi(argv[count]);
				index++;
				count--;
			}
			else
			{
				write(2, "Error\n", 6);
				return (-1);
			}
		}
		err = check_duplicates(data, index);
		if (err == 1)
		{
			write(2, "Error\n", 6);
			return (-1);
		}
		fill_stack(&stk_a, data, argc - 1);
		print_stack(&stk_a);
	}
	return (0);
}
