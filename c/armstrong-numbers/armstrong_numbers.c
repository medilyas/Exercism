#include "armstrong_numbers.h"

bool	is_armstrong_number(int candidate)
{
	int	exp, num = candidate, res = 0;

	exp = floor(log10(ab(candidate))) + 1;
	while (num > 0) {
		res += pow(num%10, exp);
		num /= 10;
	}
	if (res == candidate)
		return (true);
	return (false);
}

