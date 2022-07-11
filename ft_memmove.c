#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char 	*d;
	char	*s;
	int	i;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	else if (s < d)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(d + i) = *(s + i);
			i--;
		}
		return (dst);
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*d++ = *s++;
			i++;
		}
		return (dst);
	}	
}
