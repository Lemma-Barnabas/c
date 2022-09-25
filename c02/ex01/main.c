#include<string.h>
#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[]="";
	char src[]="hellow";
	int n=3;
	printf("%s", ft_strncpy(dest,src,n));
}
