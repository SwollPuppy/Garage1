#include "Workbench.h"

//This is where it all starts. Using header files too.
int main()
{
    //The start of this thing.
	std::cout << "Hello World!\n";

	//First test with function that takes a string variable and sets it.
	std::string greet;
	SetupString(greet);

	//Now to see if that worked.
	std::cout << greet.c_str() << std::endl;
}

