#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && i < n - 1)
	{
		str1++;
		str2++;
		i++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
