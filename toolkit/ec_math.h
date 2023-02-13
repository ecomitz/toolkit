#ifndef EC_MATH
#define EC_MATH
// Nothing in this class is implemented yet.
const double PI = 3.141592653589793;
class ec_math
{
private:


public:
	//unsigned int primes[20] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 67, 71, 73};
	//unsigned int squares[20] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324,361,400};
	const double PI = 3.141592653589793;

	/*
	* Designed to find the roots of numbers whereas they are not a perfect square.
	*
	*/
	static double sqrt(double input);
	// Returns input raised to a certain power. input^power. @param double base, double power
	double exponent(double base, double power);
	
	// Calculates logarithms. @param double base, double exp
	double logarithm(double base, double exp);
	// Finds the LCD (least common denominator) of two integers.
	int lcd(int first, int second);
	// Finds the GCD (Greatest common denominator) of two integers.
	int gcd(int first, int second);








};
#endif

