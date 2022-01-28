#include "hamming.h"

static int lenght(const char *s)
{
	int i = -1;

	while (s[++i]);
	return (i);
}

static int not_DNA_letter(char c)
{
	if (c == 'A' || c == 'C' || c == 'G' || c == 'T')
		return (0);
	return (1);
}

int compute(const char *lhs, const char *rhs)
{
	int	i;
	int	distance;

	if (!lhs || !rhs || lenght(lhs) != lenght(rhs))
		return (-1);
	i = -1;
	distance = 0;
	while (lhs[++i])
	{
		if (not_DNA_letter(lhs[i]) || not_DNA_letter(rhs[i]))
			return (-1);
		if (lhs[i] != rhs[i])
			distance++;
	}
	return (distance);
}

