#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char string[]="";
	char find[]="i";
	printf("%s\n", ft_strstr(string,find));
	//printf("%s", strstr(string,find));
}
