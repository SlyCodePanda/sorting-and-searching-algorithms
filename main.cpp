#include <iostream>
#include <vector>
#include <sstream>
#include <string>

//#include "Sort.h"
//#include "RecursiveBinarySearch.h"

int main()
{

    // The user inputs a string of numbers (e.g. "6 4 -2 88 ..etc") and those integers are then put into a vector named 'vec'.
	std::vector<int> vec;

	std::string line;
   	if ( getline(std::cin, line) )
   	{
    	std::istringstream str(line);

      	int value;
      	str >> value;
      	vec.push_back( value );
      	while ( str >> value ) 
      	{
         	vec.push_back( value );
      	}
   	}

/*--------------------------------------OUTPUT-----------------------------------------------------------------------*/
   	
   	// Print out inputted integers.
   	for ( int i = 0; i < vec.size(); i++ )
   	{
   		std::cout << vec[i] << " ";
   	}
   	std::cout << "\n";

	return 0;
}