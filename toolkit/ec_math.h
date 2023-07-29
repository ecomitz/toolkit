#ifndef EC_MATH
#define EC_MATH
// Nothing in this class is implemented yet.
const double PI = 3.141592653589793;
struct ec_math
{

	//unsigned int primes[20] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 67, 71, 73};
	//unsigned int squares[20] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324,361,400};
	//const double PI = 3.141592653589793;
	

	// Calculates an integer array of the factors of input, the first parameter and modifies the second parameter as the value with the third as the length of an array.
	// Also returns whether or not it is a prime number.
	static bool listFactors(int input, int *ret, int* len);
	// Designed to find the roots of numbers whereas they are not a perfect square.
	static double sqrt(double input);
	// Returns input raised to a certain power. input^power. 
	static double exponent(double base, double power);
	
	// Calculates logarithms. 
	static double logarithm(double base, double exp);
	// Finds the LCD (least common denominator) of two integers.
	static int lcd(int first, int second);
	// Finds the GCD (Greatest common denominator) of two integers.
	static int gcd(int first, int second);











};
#endif

