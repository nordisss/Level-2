#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = argv[1][i] + 32;
				write (1, "_", 1);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
} 

/*
#include <unistd.h>

void ft_putchar(char c)
{
	write{1, &c, 1);
}

void camel_to_snake(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			write(1, "_", 1);
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		camel_to_snake(argv[1]);
		return(0);
}
*/
