#include "space_age.h"

const float earth_year_in_second = 31557600;

const float orbital_period_in_earth_years[NEPTUNE + 1] =
{
	0.2408467,
	0.61519726,
	1.0,
	1.8808158,
	11.862615,
	29.447498,
	84.016846,
	164.79132
};

float age(planet_t planet, int64_t seconds)
{
	if (planet < 0 || planet > NEPTUNE)
		return (-1.0);
	return ((seconds / earth_year_in_second) / orbital_period_in_earth_years[planet]);
}

