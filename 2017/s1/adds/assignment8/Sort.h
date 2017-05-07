#include <iostream>
#include <vector>

class Sort
{
private:
	int a;
	int b;
	std::vector<int> vec;
	virtual int sortFunc( std::vector<int> vec, int a, int b );

public:
	Sort();
	~Sort();
};

class BubbleSort : public Sort
{
private:
	int sortFunc( std::std::vector<int> vec, int a, int b );

public:
	BubbleSort();
	~BubbleSort();
};

class QuickSort : public Sort
{
private:
	int pivot;
	int sortFunc( std::std::vector<int> vec, int a, int b );

public:
	QuickSort();
	~QuickSort();
};