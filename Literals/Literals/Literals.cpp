#include <iostream>
#include <bitset>

#define newlines std::cout << "\n\n";

int main()
{
	/*
	
	SUFFIXES:
		INTS: BASE IS INT
				u = unsigned
				l = long
				ll = long long
		FLOATS: BASE IS DOUBLE
				f = float
				l = long double
		capitalization  *doesn't* matter
	*/
	
	double sci_not{ 4.432e-3 }; //scientific notation goes uses e as exponent
	int octal{ 010 }; //0 prefix for octal
	int hex{ 0xC }; //0x for hex
	int bin_pre14{ 0x10 }; //pre 14 uses hex to create a bin value
	int bin_14{ 0b0110'1011 }; //post 14 uses 0b, can't print though
	std::bitset<8> bin_bitset{ 0b0101'1001 }; // store binary value as bitset variable; how many bits you want goes in <>, can be printed, still needs 0b prefix
	
	std::cout << sci_not << "\n";
	std::cout << octal <<"\n";
	std::cout << hex <<"\n";
	std::cout << bin_pre14 <<"\n";
	std::cout << bin_14 << "\n";
	std::cout << "\n\n";

	std::cout << "decimal\n" << 10 << "\n";
	std::cout << std::hex << "hex\n" << 10 << "\n"; //std::hex for printing values in hex
	std::cout << std::oct << "octal\n" << 10 << "\n";//std::oct for printing values in octal
	newlines;
	
	std::cout << bin_bitset << '\n'; //print bitset variable
	std::cout << std::bitset<3>(0b101) << '\n'; //print directly from bitset
	newlines;
}

