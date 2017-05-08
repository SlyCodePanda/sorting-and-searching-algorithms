#include <iostream>
#include <vector>

class RecursiveBinarySearch
{
public:
	// The searched for value for this program will always be '1'. Which we will be referred to as 'obj' in the binarySearch function.
	int obj = 1;

	bool binarySearch( std::vector<int> arr, int mid, int start, int end );

	RecursiveBinarySearch();
	~RecursiveBinarySearch();
};