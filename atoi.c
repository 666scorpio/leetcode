int	myAtoi(char* s)
{
	int	i;
	long	result;
	int	sign;
	long	check;
	long	r;

	result = 0;
	sign = 1;
	i = 0;
	while (s[i] && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
		i++;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		r = result;
		check = r * 10;
		check += (s[i] - '0');
		check *= sign;
		if (check <= 2147483647 && check >= -2147483648)
		{
			result *= 10;
			result += (s[i] - '0');
			i++;
		}
		else
		{
			if (check >= 2147483647)
				return (2147483647);
			else
				return (-2147483648);
		}
	}
	int final_result;
	final_result = result * sign;
	return (final_result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **v)
{
	printf("original atoi %d\n", atoi(v[1]));
	printf("myatoi %d", myAtoi(v[1]));
}*/
