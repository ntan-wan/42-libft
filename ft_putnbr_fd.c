#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num_long;

	c = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		num_long = n;
		num_long = -num_long;
	}
	else
		num_long = n;
	if (num_long < 10)
	{
		c = num_long + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(num_long / 10, fd);
		c = (num_long % 10) + '0';
		write(fd, &c, 1);
	}
}
