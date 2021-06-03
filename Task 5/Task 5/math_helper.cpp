#include <cmath>
#include <float.h>

inline bool double_compare(double a, double b)
{
	return (abs(a - b) < DBL_MIN);
};