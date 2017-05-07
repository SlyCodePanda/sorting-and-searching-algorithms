#include <iostream>
#include <vector>

class RecursiveBinarySearch
{
private:
	int obj;
	int start;
	int end;

	void getStart();
	void getEnd();
	bool binarySearch( std::vector<int> arr );

public:
	RecursiveBinarySearch();
	~RecursiveBinarySearch();
};