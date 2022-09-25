#include<stdio.h>
#include<string.h>

int ft_str_is_alpha(char *str);

int main()
{
	printf("%d\n",ft_str_is_alpha("helLow"));
	printf("%d\n",ft_str_is_alpha("he she"));
	printf("%d",ft_str_is_alpha("£££ss"));
}
