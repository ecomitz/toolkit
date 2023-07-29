#include "ec_math.h"


bool ec_math::listFactors(int input, int *ret, int *len)
{
	// Step 1: Assume no factors (len = 0)

	*len = 0;
	
	// Step 2: Loop through all numbers between 1 and the input
	for (unsigned int i = 1; i <= input; i++)
	{
		// Step 2b: Test the currently looping number if it is a factor by modulating input agaisnt the current number. If the result is 0, it is a factor.
		if (input % i == 0)
		{
			*((ret) +(*len*4)) = i;
			*len = *len + 1;
			
		}
	}

	// Step 3: Test if it is a prime number by seeing how many factors it has. A prime number will always have only 2: Itself, and 1. Otherwise, it is not a prime number.
	if (*len == 2)
	{
		
		return true;
	}

	return false;

}

double ec_math::sqrt(double input)
	{

	return 0.0; // placeholder
	
	}

	double ec_math::exponent(double base, double power)
	{
		return 0.0; // placeholder
	}

	double ec_math::logarithm(double base, double exp)
	{
		return 0.0; // placeholder
	}

	int ec_math::lcd(int first, int second)
	{
		return 0; // placeholder
	}

	int ec_math::gcd(int first, int second)
	{
		return 0; // placeholder
	}
