#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "Sort.h"
#include "RecursiveBinarySearch.h"

int main()
{

    // The user inputs a string of numbers (e.g. "6 4 -2 88 ..etc") and those integers are then put into a vector named 'vec'.
	std::vector<int> vec;

	// Converts string from input into integer values, and then pushes said values into vector.
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

   	// Creating QuickSort object.
   	QuickSort qSort;
   	QuickSort *ptrQSort = &qSort;
   	// Creating new vector that has been 'Quick Sorted'.
   	int vecSize = vec.size();
   	std::vector<int> qSortedVec;
   	qSortedVec = ptrQSort->sortFunc( vec, 0, vecSize-1 );

   	// Middle, start, and end positions on the vector.
   	int mid = ( 0 + (vec.size()-1) )  / 2;
   	int start = 0, end = vec.size() - 1;

    // Creating RecursiveBinarySearch object.
    RecursiveBinarySearch bSearch;
    RecursiveBinarySearch *ptrBSearch = &bSearch;
    bool bS = ptrBSearch->binarySearch( qSortedVec, mid, start, end );

/*--------------------------------------OUTPUT-----------------------------------------------------------------------*/

   	// Print out inputted integers and the binary search result.

    // Depending on the binary search, print either 'true' or 'false'.
    if ( bS == 1 )
    {
    	std::cout << "true ";
    }
    if ( bS == 0 )
    {
    	std::cout << "false ";
    }

    // Prints the result of the 'quick sorted' array.
    int sortedSize = qSortedVec.size();
   	for ( int i = 0; i < sortedSize; i++ )
   	{
   		std::cout << qSortedVec[i] << " ";
   	}
   	std::cout << "\n";

	return 0;
}