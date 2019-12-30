// Commas, and conditional op.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define newlines std::cout << "\n\n";
int main()
{
	
	// COMMA AS OPERATOR
	int x{ 5 };
	int y{ 10 };
	
	
	x++, y--; //increment x, then decrement y
	
	std::cout << x << '\n' << y ;
	newlines

		//Sometimes dangerous to use, as can be misinterpreted by compiler
	//	z=(a,b) : evaluated a,b to get value of b, assigns it to z
	// z= a,b : the value of a is assigned to z, b is discarded
		//COMMA HAS LOWEST OPERATOR PRECEDENCE

		//Best practice is to just use seperate lines of code, it does not slow down program

		////////////////////////////////////////////////////////////////////////////////////////////////////////

	//CONDITIONAL OPERATOR

//Sometimes called Arithmatic IF, is like if else statement

//COnditional usage looks like this: (Condition) ? expression one : expression 2
int a{ 5 };
	int b{ 10 };
	int high_number{ 50 };
	int low_number{ 1 };
	int example;
	
	/*	if (a < b)	//Condition 
			example = high_number; //Expression One
		else
			example = low_number; //Expression Two
			*/
							  
							  //With Conditional Operator

	example = (a < b) ? high_number : low_number; // lloks like if/else statement above: if a<b, example = high number, else, example  low number
	std::cout << "example is\n" << example << '\n';
	newlines
	//PROTIP: ALWAYS PUT CONDITIONAL PART IN PARENTHESES


	//Because conditional op is an expression, it can be used where if/else can't
	const int example_c{ (a < b) ? high_number : low_number }; //can be used to assign a const value
	
	std::cout << "example_c is\n" << example_c;
	newlines

		// USE CASE: TO IMPROVE CODE READABILITY



		





	


}

