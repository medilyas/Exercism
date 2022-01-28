#include "grains.h"

uint64_t square(uint8_t index)
{
	uint64_t	grains;
	uint8_t	i;

	i = 1;
	grains = 1;
	if (index == 1)
		return (1);
	else if (index < 1 || index > 64)
		return (0);
	while (++i <= index)
		grains *= 2;
	return (grains);
}

uint64_t total(void)
{
	uint64_t	total;

	total = 0;
	for (uint8_t i = 1; i < 65; i++)
		total += square(i);
	return (total);
}

