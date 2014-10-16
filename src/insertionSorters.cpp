/*
 * sorters.cpp
 *
 *  Created on: 11 Oct 2011
 *      Author: martin
 */

#include <insertionSorters.h>

using namespace std;

void insertionSorters::insertionSortIntArray(int *ar, int size)
{

	int j;

	for(j=1; j < size; j++)
	{
		int i = j-1;

		int value = ar[j];

		while(i >= 0 && ar[i] > value)
		{
			ar[i+1] = ar[i];
			i--;
		}

		ar[i+1] = value;
	}

}

void insertionSorters::insertionSortIntVec(vector<int> & ints)
{
	for(size_t j = 1; j < ints.size(); j++)
	{
		int i = j-1;
		int val = ints[j];

		while(i >= 0 && ints[i] > val)
		{
			ints[i+1] = ints[i];
			i--;
		}

		ints[i+1] = val;
	}
}

void insertionSorters::insertionSortIntPointers(int **ar, int size)
{

	int j;

	for(j=1; j < size; j++)
	{
		int i = j-1;

		int *value = ar[j];

		while(i >= 0 && *ar[i] > *value)
		{
			ar[i+1] = ar[i];
			i--;
		}

		ar[i+1] = value;
	}

}

