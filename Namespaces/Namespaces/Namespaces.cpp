#include "Functions.h"
#include "Variables.h"
#include "Nested.h"
#include <iostream>


//Namespaces allow for multiple functions, variables etc... with the same name to be called in the same file,
//using the scope resolution operator, ::
int main()
{
    std::cout << functions::x(variables::square, variables::x) << "\n"; 
    std::cout << Foo::Bar::FooBar << "\n";  //C++ allows for nested namespaces

}
