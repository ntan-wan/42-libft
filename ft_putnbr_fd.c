#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	c;
	long	num_long;

	c = 0;
	num_long = n;
	if (n < 0)
	{
		num_long = -num_long;
		write(fd, "-", 1);
	}
	if (num_long >= 0 && num_long <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(num_long / 10, fd);
		ft_putnbr_fd(num_long % 10, fd); 
	}
}
