#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	ft_div_mod(5,6,0,0);
	write (1, &ft_div_mod(), 1);
	return (0);
}
