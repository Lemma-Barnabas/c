#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main()
{
	int tab[7] = {7, 6, 8,1, 4, 2, 5};
	int size = 7;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]); 
	return (0);
}	
