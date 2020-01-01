#define newlines std::cout << "\n\n";

#include <iostream>


void incrementAndPrint() 
{
    int x = 1;  //create int
    ++x;
    std::cout << x; //int is destroyed
}

void incrementAndPrint_S()
{
    int s_x = 2;    //create static int
    ++s_x;
    std::cout << s_x;   //static int is not destroyed
}

  //The Static Keyword is used to make variables have persistent scope throughout the program, but 
//when applied to a global variable, it means that the variable can only be referenced in the file it was 
//declared in

//a common use for static variables is in unique ids

int GenerateId()
{
    static int s_id = 1;//generates a unique id everytime it is called, no matter how many times it is called
    return s_id++;

}

int main()
{
    incrementAndPrint();    
    incrementAndPrint();    //prints 2 2 times, because a new variable is created and destroyed 
                            //each time this is run
    newlines
   
    incrementAndPrint_S();
    incrementAndPrint_S();  //outputs 2, than 3 because the static variable is not destroyed each time 
                            //function is run
    newlines;
    
}

