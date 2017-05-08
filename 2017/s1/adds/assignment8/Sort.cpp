#include <iostream>
#include <vector>
#include <string>

#include "Sort.h"

// Sort class destructor.
Sort::~Sort()
{

}

// BubbleSort class constructor.
BubbleSort::BubbleSort()
{

}

// BubbleSort sort function that takes in a vector and two of the ints from said vector. And sorts them from ascending order
// using the 'Bubble Sort' algorithm.
std::vector<int> BubbleSort::sortFunc( std::vector<int> vec, int a, int b )
{
	int first = a;
	int sec = b;
	int size = vec.size();

	for ( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size - 1; j++ )
		{
			if ( vec.at(j) > vec.at(j+1) )
			{
				int temp = vec.at(j+1);
				vec.at(j+1) = vec.at(j);
				vec.at(j) = temp;
			}
		}
	}

	return vec;
}

// BubbleSort class destructor.
BubbleSort::~BubbleSort()
{

}