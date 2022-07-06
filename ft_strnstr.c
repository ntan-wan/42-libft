#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char 	*hay;
	
	hay = (char *)haystack;
	i = 0;
	if (!needle[i])
		return (hay);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = 0;
			while (needle[j] && (i + k < len))
			{
				if (haystack[i + k] != needle[j])
					break;
				k++;
				j++;
			}
			if (needle[j] == '\0')
				return (hay + i);
		}
		i++;
	}
	return (NULL);
}
