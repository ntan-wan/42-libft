#include "libft.h"

int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	i = 0;
	start = 0;
	end = s1_len - 1;
	while (s1[start] && check_set(s1[start], set))
		start++;
	while (s1[end] && check_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
