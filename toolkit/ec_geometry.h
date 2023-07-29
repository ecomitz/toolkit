#ifndef EC_GEOMETRY
#define EC_GEOMETRY
#include "ec_math.h"
struct ec_geometry : private ec_math
{
	//----------------------------------------------------------------------------------------------
	// Rectangle formulas
	
	// Calculates the area of a rectangle given int length and width. Returns an int.
	static unsigned int rectangleArea(unsigned int len, unsigned int width);
	// Calculates the area of a rectangle given double length and width. Returns a double.
	static double rectangleArea(double len,  double width);
	// Calculates the perimeter of a rectangle given int length and width. Returns an int.
	static unsigned int rectanglePerimeter(unsigned int len, unsigned int width);
	// Calculates the perimeter of a rectangle given double length and width. Returns a double.
	static double rectanglePerimeter(double len, double width);

	//----------------------------------------------------------------------------------------------
	// Circle formulas
	
	// Calculates the circumference of a cricle given int radius. Returns an int.
	static unsigned int circleCircumference(unsigned int radius);
	// Calculates the circumference of a circle given double radius. Returns a double.
	static double circleCircumference(double radius);
	// Calculates the area of a cricle given int radius. Returns an int.
	static unsigned int circleArea(unsigned int radius);
	// Calculates the area of a circle given double radius. Returns a double.
	static double circleArea(double radius);

	//----------------------------------------------------------------------------------------------
	// Triangle formulas
	
	// Calculates the area of a triangle given int base and int height. Returns an int.
	static unsigned int triangleArea(unsigned int base, unsigned int height);
	// Calculates the area of a triangle given int base and int height. Returns an int.
	static double triangleArea(double base, double height);
	// Calculates the perimeter of a triangle given int side A, side B, and side C. Returns an int.
	static unsigned int trianglePerimeter(unsigned int sideA, unsigned int sideB, unsigned sideC);
	// Calculates the perimeter of a triangle given double side A, side B, and side C. Returns a double.
	static double trianglePerimeter(double sideA, double sideB, double sideC);
	// Calculates the height of a triangle given int area and int base. Returns an int.
	static unsigned int triangleHeight(unsigned int area, unsigned int base);
	// Calculates the height of a triangle given double base and double height. Returns a double.
	static double triangleHeight(double area, double base);

	
	//----------------------------------------------------------------------------------------------
	// Right triangle formulas

	// Calculates the hypotenuse of the right triangle given side A and side B.
	static unsigned int pythagoreanTheorem(unsigned int sideA, unsigned int sideB);




};
#endif
