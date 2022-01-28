#include "square_root.h"

int square_root(int number)
{
	int	n;

	n = 0;
	if (number <= 0)
		return (0);
	else if (number == 1)
		return (1);
	while (++n <= number/2 && n < 46341)
		if (n * n == number)
			return (n);
	return (0);
}

