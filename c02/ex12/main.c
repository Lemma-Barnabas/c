#include<unistd.h>
#include<stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main()
{
	char *string;

	string = "Bonjour les aminches\t\n\tc est fou.tout ce qu on  peut fair";
	ft_print_memory(string, 1500);
}
