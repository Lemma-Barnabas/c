#include<string.h>
#include<stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = "Worl!";
	char dest[]="he";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
