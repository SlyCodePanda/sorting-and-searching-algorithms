#include <iostream>
#include <vector>

// Base class for sorting function.
class Sort
{
	protected:
		// Creating a pure virtual sort function to be overridden in derived classes.
		virtual std::vector<int> sortFunc( std::vector<int> vec, int a, int b ) = 0;

	public:
		~Sort();
};

// Class for creating Bubble Sort algorithm, a child class of base class 'Sort'.
class BubbleSort : public Sort
{
	public:
		std::vector<int> sortFunc( std::vector<int> vec, int a, int b );

		BubbleSort();
		~BubbleSort();
};

// Class for creating Quick Sort algorithm, a child class of the base class 'Sort'.
class QuickSort : public Sort
{
	public:
		std::vector<int> sortFunc( std::vector<int> vec, int left, int right );
		int Partition( std::vector<int> vec, int left, int right );

		QuickSort();
		~QuickSort();
};
