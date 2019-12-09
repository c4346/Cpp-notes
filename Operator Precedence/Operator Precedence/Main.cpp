#define newlines std::cout << "\n\n";
#define newline std::cout << '\n';

#include <iomanip>
#include <iostream>




int dividebyzero()
{
		int x{4};
		int y{0};
	return x / y;
}


int main()
{
	int x{ 4 };
		int opposite{ -x };
	int div1{ 7 };
		int div2{ 4 };

	
		std::cout << 1 + 6 / 2 << '\n';		//arithmetic follows standart mathmatical precedence
		std::cout << -x << '\n';	//unary minus changes number to its opposite (negative)
	std::cout << opposite << '\n'; //example
		std::cout << 6 / 3 << '\n'; // division with even quotient is okay
		
									
									
	//std::cout << std::setprecision(5); optional
		std::cout << static_cast<double>(div1) / static_cast<double>(div2) << '\n'; //use static cast to divide integers using floating point division
	
																					
	//dividebyzero(); crashes program or weird return code

		//INCREMENTING
		x = x + 1; //bad
		x += 1; //better
		x++; //best
		++x; //also good
		std::cout << x;
		newline

};

