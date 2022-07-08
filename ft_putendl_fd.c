#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}