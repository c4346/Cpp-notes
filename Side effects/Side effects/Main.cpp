#include <iostream>
int add(int x, int y) {
	
	return x + y;

}
//side effects are caused by a function doing anything that persists it's lifetime
int main() {

	int x{ 5 };

	int value = add(x, ++x); //is it 5+6, or 5+5?
	//evaluates to either 10, or 11; depending on the compiler used
	std::cout << value; //visual c++ evaluates this to 11, beceause it evaluates from left to right
	//To avoid side effects, only use a variable once in a given statemen
}
