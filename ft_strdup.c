#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_len;
	size_t	i;
	char 	*ptr;
	
	i = 0;
	str_len = ft_strlen(str);
	ptr = (char *)malloc((str_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
