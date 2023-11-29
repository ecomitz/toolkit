#ifndef EC_MATH
#define EC_MATH
// Nothing in this class is implemented yet.
const double PI = 3.141592653589793;
struct ec_math
{
	

	// Calculates an integer array of the factors of input, the first parameter and modifies the second parameter as the value with the third as the length of an array.
	// Also returns whether or not it is a prime number.
	static bool listFactors(int input, int *ret, int* len);
	// Designed to find the roots of numbers whereas they are not a perfect square.
	static double sqrt(double input);
	// Returns input raised to a certain power for integer powers. input^power. 
	static double exponent(double base, int power);
	
	// Calculates logarithms. 
	static double logarithm(double base, double exp);
	// Finds the LCD (least common denominator) of two integers.
	static int lcd(int first, int second);
	// Finds the GCD (Greatest common denominator) of two integers.
	static int gcd(int first, int second);











};
#endif

