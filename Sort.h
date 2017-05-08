#include <iostream>
#include <vector>

// Base class for sorting function.
class Sort
{
	protected:
		//std::vector<int> vec;
		virtual std::vector<int> sortFunc( std::vector<int> vec, int a, int b ) = 0;

	public:
		~Sort();
};

// Class for creating Bubble Sort algorithm, a child class of base class 'Sort'.
class BubbleSort : public Sort
{
	protected:
		std::vector<int> sortFunc( std::vector<int> vec, int a, int b );

	public:
		BubbleSort();
		~BubbleSort();
};
/*
// Class for creating Quick Sort algorithm, a child class of the base class 'Sort'.
class QuickSort : public Sort
{
	private:
		int pivot;
		std::vector<int> sortFunc( std::std::vector<int> vec, int a, int b );

	public:
		QuickSort();
		~QuickSort();
};
*/