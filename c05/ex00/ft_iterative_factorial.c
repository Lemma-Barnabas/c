int	ft_iterative_factorial(int nb)
{
	int	resulta;
	int	i;

	resulta = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		resulta *= i;
		i++;
	}
	return (resulta);
}
