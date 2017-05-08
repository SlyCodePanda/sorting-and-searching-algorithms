#include <iostream>
#include <string>
#include <vector>

#include "RecursiveBinarySearch.h"

// RecursiveBinarySearch class constructor.
RecursiveBinarySearch::RecursiveBinarySearch()
{

}

// Sets the object that is being searched for. 
// In this case, we are always looking for the integer '1'.
int obj = 1;

// Searching the vector given for obj. if obj is found the function returns true, otherwise it returns false.
bool RecursiveBinarySearch::binarySearch( std::vector<int> vec, int mid )
{
	int start = 0, end = vec.size() - 1;
	std::cout << "mid : " << mid << "\n";

    while (start + 1 < end) {

        if (vec.at(mid) == obj)
            return true;

        else if (vec.at(mid) > obj) 
            //end = mid - 1;
            return binarySearch( vec, mid-1 );

        else 
            //start = mid + 1;
            return binarySearch( vec, mid+1 );

    }

    if ((vec.at(start) == obj) || (vec.at(end) == obj))
        return true;
    else
    {
    	return false;
    }
}

// RecursiveBinarySearch class destructor.
RecursiveBinarySearch::~RecursiveBinarySearch()
{

}