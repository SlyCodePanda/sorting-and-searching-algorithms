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
	int vecSize = vec.size();
   int mid = (vec.at(0) + vec.at( vecSize-1 )) / 2;

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

   	// Creating BubbleSort object.
   	BubbleSort bSort;
   	BubbleSort *ptrBSort = &bSort;
   	// Creating new vector that has been 'Bubble Sorted'.
   	std::vector<int> bSortedVec;
   	bSortedVec = ptrBSort->sortFunc( vec, vec.at(0), vec.at(1) );

   	// Creating QuickSort object.
   	QuickSort qSort;
   	QuickSort *ptrQSort = &qSort;
   	// Creating new vector that has been 'Quick Sorted'.
   	std::vector<int> qSortedVec;
   	qSortedVec = ptrQSort->sortFunc( vec, 0, vec.size()-1 );

      // Creating RecursiveBinarySearch object.
      RecursiveBinarySearch bSearch;
      RecursiveBinarySearch *ptrBSearch = &bSearch;
      bool bS = ptrBSearch->binarySearch( vec, mid );

/*--------------------------------------OUTPUT-----------------------------------------------------------------------*/

   	// Print out inputted integers.
   	std:: cout << "Original list of integers: \n";
   	for ( int i = 0; i < vec.size(); i++ )
   	{
   		std::cout << vec[i] << " ";
   	}
   	std::cout << "\n";

   	std::cout << "Bubble Sorted integers: \n";
   	for ( int i = 0; i < bSortedVec.size(); i++ )
   	{
   		std::cout << bSortedVec[i] << " ";
   	}
   	std::cout << "\n";

   	std::cout << "Quick Sorted integers: \n";
   	for ( int i = 0; i < qSortedVec.size(); i++ )
   	{
   		std::cout << qSortedVec[i] << " ";
   	}
   	std::cout << "\n";

      std::cout << "Binary Search Result: \n";
      std::cout << bS << "\n";

	return 0;
}