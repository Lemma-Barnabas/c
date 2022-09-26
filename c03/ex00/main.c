#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Helloo";
	str2 = "9elloo";
	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
}
