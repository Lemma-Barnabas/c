#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[]="helow";
	char src[]="there";
	unsigned int n=3;
	
	printf("%d",ft_strlcat(dest,src,n));
	printf("%lu", strlcat(dest,src,n));
}
