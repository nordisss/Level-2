#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char		*dest;
	int			i;
	int			x;

	i = 0;
	x = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) *(i + 1));
	if (!dest)
		return (NULL);
	while (x <= i)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
