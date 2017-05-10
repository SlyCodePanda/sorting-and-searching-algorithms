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

	int size = vec.size();

	// Checks to make sure the iterator does not exceed the length of the vector given.
	for ( int i = 0; i < size; i++ )
	{
		// Loops to the length of the vector, minus one.
		for ( int j = 0; j < size - 1; j++ )
		{
			// If int at position j is greater than the integer at position j+1 is larger...
			if ( vec.at(j) > vec.at(j+1) )
			{
				// Swap integer at position j to position of j+1 and vice-versa.
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

// QuickSort class constructor.
QuickSort::QuickSort()
{

}

// Takes in a vector, the first integer of that vector and the last integer of that vector.
std::vector<int> QuickSort::sortFunc(std::vector<int> vec, int left, int right) {

    if ( left < right ) 
    {
        // Partition
        int i = left -1;
        int j = right +1;
        int tmp;
        int pivot = vec.at( (left + right) / 2 );

        while (i < j)
        {
            i += 1;
            j -= 1;

            while (vec.at(i) < pivot)
            {
                i+= 1;
            }
            while (vec.at(j) > pivot)
            {
                j-= 1;
            }

            std::cout << "left/i: " << i << " || ";
            std::cout << "right/j: " << j << "\n";

            if (i < j) 
            {
                tmp = vec.at(i);
                vec.at(i) = vec.at(j);
                vec.at(j) = tmp;
            }
        }
        // Recursion.    
        sortFunc( vec, left, j );
        sortFunc( vec, j+1, right );
    }
    return vec;
}

// QuickSort class destructor.
QuickSort::~QuickSort()
{

}