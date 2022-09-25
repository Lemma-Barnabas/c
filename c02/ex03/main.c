#include<stdio.h>
#include<string.h>

int ft_str_is_numeric(char *str);

int main()
{
	printf("%d", ft_str_is_numeric("hey hey"));
	printf("%d", ft_str_is_numeric("12345667890"));
	printf("%d", ft_str_is_numeric(""));
		
}
