#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;
	
	//if (size == 0)
	//	return (rtn);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	rtn = malloc(count * size);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, count * size);
	return (rtn);
}
