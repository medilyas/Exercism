#include "resistor_color.h"
#include <stdlib.h>

int color_code(resistor_band_t color) {
    return color;
}

resistor_band_t *colors()
{
	int	i;
    resistor_band_t *colors = malloc(sizeof(resistor_band_t) * 10);

	i = -1;
	while (++i < 10)
        colors[i] = (resistor_band_t)i;
    return (colors);
}
