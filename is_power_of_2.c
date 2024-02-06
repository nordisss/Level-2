
int	is_power_of_2(unsigned int n)
{
	unsigned long int	idx;

	idx = 1;
	while (idx <= n)
	{
		if (idx == n)
			return (1);
		idx *= 2;
	}
	return (0);
}
