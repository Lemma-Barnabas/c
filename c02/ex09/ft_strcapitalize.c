char *ft_strlowcase(char *str)
{
int i;
i=0;
while (str[i] != '\0')
{
if(str[i]>= 'A' && str[i]<='Z')
{
str[i]+=32;
}
i++;
}
return (str);
}

char *ft_strcapitalize(char *str)
{
	int b;
	int a;
	
	a=0;
	b=1;
	ft_strlowcase(str);

	while(str[a] != '\0')
		{
			if (str[a] >='a' && str[a]<='z')
			{
				if (b == 1)
				str[a] -= 32;
			b=0;
			}
			else if(str[a]>='0' && str[a]<='9')
				b = 0;
			else 
				b = 1;
			a++;
		}
	return(str);
}
