
#include <iostream>


//Global Variables are initialized outide any functions, or in the global scope

int g_x;    //Best Practice to use the g_ prefix to signify global variables
const int g_y{ 2 };

void print_number() {

    std::cout << g_y; //Can even be used inside functions

}


int main()
{
    g_x = 4;   //Global Variables can be used anywhere in the program


}

