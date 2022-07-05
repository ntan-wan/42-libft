#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t 	str_len;
	size_t	i;

	str_len = ft_strlen(str);
	i = str_len - 1;
	while (*(str + i) != c && i >= 0)
		i--;
	if (i < 0)
		return (NULL);
	else
		return ((char *)(str + i));
}
