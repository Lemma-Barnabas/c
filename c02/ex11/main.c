#include<unistd.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");

	ft_putstr_non_printable("bbbb\n is \t djk\%dk \v \0n");
}
