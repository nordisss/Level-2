#include <unistd.h> // For write // For printf

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	mask;
	unsigned char	bit;

	i = 7;
	mask = 1;
	while (i >= 0)
	{
		bit = (((octet >> i) & mask) + '0');
		ft_putchar(bit);
		i--;
	}
}
