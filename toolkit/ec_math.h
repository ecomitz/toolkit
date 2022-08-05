#ifndef EC_MATH
#define EC_MATH
class ec_math
{
	int primes[20] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 67, 71, 73};
	unsigned int squares[20] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324,361,400};
	/*
	* Designed to find the roots of numbers whereas they are not a perfect square.
	*
	*/
	double sqrt(double input);






};
#endif

