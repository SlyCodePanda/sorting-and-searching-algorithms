#include <iostream>
#include <string>
#include <vector>

#include "RecursiveBinarySearch.h"

// RecursiveBinarySearch class constructor.
RecursiveBinarySearch::RecursiveBinarySearch()
{

}

// Recursively Searching the vector given for obj. if obj is found the function returns true, otherwise it returns false.
// It does this by splitting the vector to search in half. 
// If the midway point is less than obj it will search to the left of the pivot, if greater it will search to the left. If the pivot equals obj, it will return true. 
bool RecursiveBinarySearch::binarySearch( std::vector<int> vec, int mid, int start, int end )
{
    while (start + 1  < end) {

        if (vec.at(mid) == obj)
            return true;

        else if (vec.at(mid) > obj)
        { 
            end = mid - 1;
            vec.pop_back();

            std::cout << vec.at(vec.size()-1) << "\n";
            return binarySearch( vec, mid -1, start, end );
        }

        else if (vec.at(mid) < obj)
        { 
            start = mid + 1;
            vec.pop_back();
            return binarySearch( vec, mid +1, start, end );
        }
        else
        {
            return false;
        }

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