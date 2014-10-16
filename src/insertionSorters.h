/*
 * sorters.h
 *
 *  Created on: 11 Oct 2011
 *      Author: martin
 */

#ifndef INSERTIONSORTERS_H_
#define INSERTIONSORTERS_H_

#include <vector>
#include <iostream>

class insertionSorters
{

public:
	void insertionSortIntArray(int *ar, int size);
	void insertionSortIntPointers(int **ar, int size);
	void insertionSortIntVec(std::vector<int> & ints);

	template<typename T> void insertionSortTVec(std::vector<T> & v);
};

//template<typename T> void insertionSortTVec(std::vector<T> &);

template<typename T> void insertionSorters::insertionSortTVec(std::vector<T> & v)
{
	for(size_t j = 1; j < v.size(); j++)
	{
		int i = j-1;
		T val = v[j];

		while(i >= 0 && v[i] > val)
		{
			v[i+1] = v[i];
			i--;
		}

		v[i+1] = val;
	}
}

#endif /* SORTERS_H_ */
