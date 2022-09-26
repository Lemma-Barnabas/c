#include <stdio.h>
#include<string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char a[20] = "hey";
	char b[20] = "ther-";
//	char *t = ft_strncat(a, b, 2);
	//printf("%s\n", t);
	printf("%s", strncat(a, b, 2));
	return (0);
}
