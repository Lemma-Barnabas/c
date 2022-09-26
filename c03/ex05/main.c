#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[]="helow";
	char src[]="there";
	
	printf("%i", strlcat(dest,src,3));
}
