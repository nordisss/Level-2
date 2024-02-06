int	ft_atoi(const char *str)
{
	int	simb;
	int	i;
	int	var;

	simb = 1;
	i = 0;
	var = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			simb = -1 * simb;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var = (str[i] - '0') + (var * 10);
		i++;
	}
	return (var * simb);
}
/*
int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
*/
