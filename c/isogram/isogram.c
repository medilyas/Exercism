#include "isogram.h"

static int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

bool	is_isogram(const char phrase[])
{
	int	i;
	int	k;

	if (!phrase)
		return (0);
	i = -1;
	while (phrase[++i])
	{
		if (phrase[i] == 32 || phrase[i] == 45)
			continue;
		k = i;
		while (phrase[++k])
			if (ft_tolower(phrase[k]) == ft_tolower(phrase[i]))
				return (0);
	}
	return (1);
}
