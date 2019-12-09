#include <iostream>
#include <cmath> //For std::abs, returns absolute value of expression

bool equal_enough(double a, double b, double epsilon) { //relies on defined epsilon value, 
	//good for applications where it would only be used in a certain way
														
	return std::abs(a - b) <= epsilon;
	//use a different epsilon for different degrees of accuracy and use cases
}




int main()
{ 
	//You Can't use boolean operators for floating point comparisons, as they may be binary decimals
	//so we write our own function ↑
	 
	double x;
	double y;
	double user_epsilon;
	
	std::cin >> x;
	std::cin >> y;
	std::cin >> user_epsilon;
	bool close_enough{ equal_enough(x, y, user_epsilon) };
	std::cout << std::boolalpha << equal_enough(x, y, user_epsilon) << '\n' << close_enough; //wow, it works
		return 0;
}