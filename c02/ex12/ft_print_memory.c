/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarnaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:08:14 by lbarnaba          #+#    #+#             */
/*   Updated: 2022/09/25 15:34:57 by lbarnaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_print_data(char *s, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (++i < size)
	{
		if (!(i % 2))
			ft_putchar(' ');
		ft_puthex(s[i]);
	}
	while (i < 16)
		if (i++ % 2)
			write(1, "  ", 2);
	else
		write(1, "  ", 3);
	ft_putchar(' ');
	i = -1;
	while (++i < size)
		if (s[i] < ' ' || s[i] == 127)
			ft_putchar('.');
	else
		ft_putchar(s[i]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;	

	i = 0;
	while (i < size)
	{
		ft_putchar('0');
		j = 56;
		while ((j) >= 0)
			j -= 8;
		ft_puthex((unsigned long int)(addr + i) >> j & 0xff);
		ft_putchar(':');
		if (size - i < 16)
			ft_print_data(addr + i, size - i);
		else
			ft_print_data(addr + i, 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
