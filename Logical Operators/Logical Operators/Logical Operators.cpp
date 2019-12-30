#define newlines std::cout << "\n\n";

#include <iostream>


int main() //C++ has 3 logical operators: AND ( && ), NOT ( ! ) and OR ( || )
{
///////////////////////LOGICAL NOT
    int x;
    std::cin >> x;
    bool boolean{ x < 10 }; // true if x < 100
    if (!boolean) //if x is not < 10 (> than)
        std::cout << "thing\n";
    else
        std::cout << "not thing\n"; //LOGICAL NOT HAS LOW LEVEL OF PRECEDENCE, BE CAREFUL
    newlines
 ////////////////////// LOGICAL OR
 int a;
 int b;
    std::cin >> a;
    std::cin >> b;
    if (a || b == 0) //if a  OR b == 0:
        std::cout << "wow, it works\n";
    else
        std::cout << "wow, a bug\n";
////////////////////// LOGICAL AND
    int number;
    int other_number;
    std::cin >> number;
    std::cin >> other_number;
    if (number > other_number&& number < 50 && number > 5) //
        std::cout << "wow\n";
    else
        std::cout << "wow1\n";










}

