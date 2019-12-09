#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdint>
#define newline std::cout << '\n';




int main()	{

		//modulus operator (%), finds the remainder of 2 numbers from int devision
		std::cout << 5 % 2; //give 1, because 5/2 gives a decimal answer, or a remainder
	newline;
		//modulus with negative returns sign of first number
		std::cout << 5 % -2 << '\n' << -5 % 2;
	
	newline;	
	newline;

		//you cannot use teh carret symbol (^) for exponenting numbers in c++, so you have to call a function from the cmath library
	
	double exponent_d = std::pow(3.0, 4.0); //3 to the 4th power 
			std::cout << "exponent_d is:       " << exponent_d << '\n';
		std::cout << std::pow(7, 2) << '\n'; //can also be used as a literal
	//std::pow uses floating point math so answers may or may not be binary repeating decimals, and imprecise


}