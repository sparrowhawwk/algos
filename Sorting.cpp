// Sorting.cpp : Defines the entry point for the application.
//

#include "Sorting.h"

int main()
{
	std::vector<int> numbers = { 4, 5, 1, 0, 56, 44 };
	int vLength = numbers.size();
	insertionSort(numbers, vLength);
	for (auto n : numbers)
	{
		std::cout << n << std::endl;
	}
	return 0;
}

void insertionSort(std::vector<int>& intArr, int length)
{
	if (length > 1)
	{
		int i, j, k;
		for (i = 1; i < length; i++)
		{
			k = intArr[i];
			j = i - 1;
			while (j >= 0 && intArr[j] > k)
			{
				intArr[(__int64)j + 1] = intArr[j];
				j = (__int64)j - 1;
			}
			intArr[(__int64)j + 1] = k;
		}
	}
}
