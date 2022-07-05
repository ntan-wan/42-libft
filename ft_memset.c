#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char 	*ptr;
	size_t 		i;

	ptr = str;
	i = 0;
	if (!str)
		return (NULL);

	while (i < n)
	{
		*ptr++ = c;
		i++;
	}
	return (str);
}
