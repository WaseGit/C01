#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int			*ptr1;
	int			*ptr2;

	ptr1 = &(tab[0]);
   	ptr2 = &(tab[size -1]);
	while (ptr1 < ptr2)
	{
		ft_swap(ptr1, ptr2);
		ptr1++;
		ptr2--;
	}
}

int	main	(void)
{
	ft_rev_int_tab("4654897981", 10);
	return 0;
}
