#include "ec_mathtests.h"

void ec_mathtests::listFactorsTests()
{
	std::cout << "Prime Factorization Tests: " << std::endl;
	std::cout << "Number: 5. Expected results: Is a prime number. Factors: 1, 5. Actual: " << std::endl;
	int* primeList1 = new int();
	int* primeList1Len = new int();
	if (ec_math::listFactors(5, primeList1, primeList1Len) == true)
	{
		std::cout << "Is a prime number. ";
	}
	else
	{
		std::cout << "Is not a prime number. ";
	}
	std::cout << "Factors: ";
	for (int i = 0; i < *primeList1Len; i++)
	{
		std::cout << *(primeList1 + i * 4) << " ";
	}
	std::cout << std::endl;


	delete primeList1;
	delete primeList1Len;
	std::cout << "---------------------------------------------------------------------------------------------- " << std::endl;
}

void ec_mathtests::sqrtTests()
{
	std::cout << "---------------------------------------------------------------------------------------------- " << std::endl;
}

void ec_mathtests::logarithmTests()
{
	std::cout << "---------------------------------------------------------------------------------------------- " << std::endl;
}

void ec_mathtests::lcdTests()
{
	std::cout << "---------------------------------------------------------------------------------------------- " << std::endl;
}

void ec_mathtests::gcdTests()
{
	std::cout << "---------------------------------------------------------------------------------------------- " << std::endl;
}

void ec_mathtests::allTests()
{
	listFactorsTests();
	sqrtTests();
	logarithmTests();
	lcdTests();
	gcdTests();
}


void ec_mathtests::testSelector()
{
	std::cout << "Mathematical Functions Tests: \n---------------------------------------------------------------------------------------------- " << std::endl;
	char input = 0;
	while (input != '0')
	{
		std::cout << "Select a test to run: " << std::endl;
		std::cout << "0: End mathematical testing:" << std::endl;
		std::cout << "1: Prime Factorization Tests:" << std::endl;
		std::cout << "2: Square Root Tests:" << std::endl;
		std::cout << "3: LCD Tests:" << std::endl;
		std::cout << "4: GCD Tests:" << std::endl;
		std::cout << "5: All Tests:" << std::endl;
		std::cin >> input;
		switch (input)
		{
		case '0':
			return;
		case '1':
			listFactorsTests();
			break;
		case '2':
			sqrtTests();
			break;
		case '3':
			lcdTests();
			break;
		case '4':
			gcdTests();
			break;
		case '5':
			allTests();
			break;
		default:
			std::cout << "Invalid option" << std::endl;
		}
	}
	std::cout << "---------------------------------------------------------------------------------------------- " << std::endl;
}