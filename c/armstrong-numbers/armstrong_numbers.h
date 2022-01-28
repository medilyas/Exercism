#ifndef ARMSTRONG_NUMBERS_H
#define ARMSTRONG_NUMBERS_H

#include <stdbool.h>
#include <math.h>

#define ab(X) (X < 0 ? -X : X)

bool is_armstrong_number(int candidate);

#endif
