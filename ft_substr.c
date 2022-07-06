#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*result;
	size_t	s_len;
	size_t	s_remain;

	s_remain = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start < s_len)
		s_remain = s_len - start;
	if (len < s_remain)
		s_remain = len;
	result = (char *)malloc((s_remain + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, s_remain + 1);
	return (result);
}
