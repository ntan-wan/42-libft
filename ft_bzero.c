#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char 	*ptr;
	size_t		i;

	ptr = (unsigned char *)s;
	i = 0;
	if (!ptr)
		return;
	while (i < n)
	{
		*ptr++ = 0;
		i++;
	}
}
