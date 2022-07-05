#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	while (*str != c && *str != '\0')
		str++;
	if (*str == '\0')
		return (NULL);
	else
		return ((char *)str);
}
