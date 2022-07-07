#include "libft.h"

int	is_negative(int n, long *number_long)
{
	if (*number_long < 0)
	{
		*number_long = n;
		*number_long = -(*number_long);
		return (1);
	}
	else
		*number_long = n;
		return (0);
}

int	count_digit(long number)
{
	int digit_sum;

	digit_sum = 0;
	if (number < 0)
	{
		digit_sum++;
		number = -number;
	}
	while (number > 0)
	{
		digit_sum++;
		number /= 10;
	}
	return (digit_sum);
}

char	*mem_alloc(char *ptr, long number_long, int negative, int digit)
{
	if (number_long == 0)
		ptr = ft_strdup("0");
	else if (number_long != 0)
		ptr = (char *)malloc(sizeof(char) * (negative + digit + 1));
	else
		ptr = NULL;
	return (ptr);
}

char *ft_itoa(int n)
{
	long 	number_long;
	int	negative;
	int	digit;
	char 	*result;
	long	remain;

	result = NULL;
	number_long = n;
	digit = count_digit(number_long);
	negative = is_negative(n, &number_long);
	result = mem_alloc(result, number_long, negative, digit);
	if (number_long != 0)
	{
		result[digit] = '\0';
		while (--digit)
		{	
			remain = number_long % 10;
			result[digit] = remain + '0';
			number_long /= 10;
		}
		if (negative)	
			result[0] = '-';
		else
			result[0] = number_long + '0';
	}
	return (result);
}
