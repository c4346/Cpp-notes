#define newlines std::cout << "\n\n\n";
#include <iostream>
//#include "constants.h"	
int main()
{
	const double gravity{ 9.8 }; //value can't be changed, compile time constant
	//gravity = 6.4 wont work
	int not_constant;
	
	std::cin >> not_constant; // get value for not_constant
	
	const int constant {not_constant} //assign constant with value of not_constant, this is an exampole of a runtime constant
	
	constexpr compile_time_const{ 28 }; //constexpr defines a constant that must be a compile time constant

		//dont use sybolic macros for literal values, use constants (constexpr) instead
	newlines
		std::cout << constants::pi << "\n";

	return 0;
	
}