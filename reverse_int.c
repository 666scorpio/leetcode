#include <stdlib.h>

long	ft_atoi(char *s)
{
	long	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	if (s[i] == '-')
	{
		i++;
		sign = -1;
	}
	result = 0;
	while (s[i])
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return (result * sign);
}

int	len(int x)
{
	int	l;

	l = 0;
	if (x == 0)
		return (0);
	if (x < 0)
	{
		l++;
		x *= -1;
	}
	while (x)
	{
		l++;
		x /= 10;
	}
	return (l);
}

int	reverse(int x)
{
	char	*rev;
	long	y;
	int		l;
	int		sign;
	int		i;

	l = len(x);
	rev = malloc((l + 1) * sizeof(char));
	y = x;
	sign = 0;
	if (y < 0)
	{
		sign = 1;
		y *= -1;
	}
	i = 0;
	if (sign)
	{
		rev[0] = '-';
		i++;
	}
	while (i < l)
	{
		rev[i] = y % 10 + '0';
		y /= 10;
		i++;
	}
	rev[l] = '\0';
	return (ft_atoi(rev));
}

#include <stdio.h>
int main(int ac, char **av)
{	
	printf("%d", reverse(atoi(av[1])));	
}
