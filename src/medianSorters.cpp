#include <medianSorters.h>
#include <iostream>

#include <stdlib.h>
//for seeding medianSorters random number generator
#include <time.h>

using namespace std;

int medianSorters::getPivot(int left, int right)
{
	static bool seeded = false;//ensure srand called once only...

	if(!seeded)
	{
		//seed rand by time -based so it doen't return same set of numbers each time
		unsigned int iseed = (unsigned int)time(NULL);
		srand (iseed);
		seeded = true;
	}

    int iran = rand();

    //std::cout << "iran is " << iran << std::endl;

    //normalise rand() to 0 - 1
    double ran = (double)iran/(double)RAND_MAX;

    //std::cout << "ran is " << ran << std::endl;

    //multiply index length by rand
    double double_index = (right-left) * ran;

    //std::cout << "double_index is " << double_index << std::endl;

	//+0.5 to make sure int rounding rounds rather than truncates...
    //return random index vale >= left
	return left + (int)(double_index + 0.5);
}

int medianSorters::partitionIntArray(int *ar, int left, int right, int pivotIndex)
{
	int pivot = ar[pivotIndex];

	//move pivot to end of array
	int tmp = ar[right];
	ar[right] = ar[pivotIndex];
	ar[pivotIndex] = tmp;

	int store = left;

	//all values <= pivot are moved to the beginning of the array...
	for(int idx = left; idx < right; idx++)
	{
		if(ar[idx] <= pivot)
	    {
	    	tmp = ar[idx];
	    	ar[idx] = ar[store];
	    	ar[store] = tmp;
	    	store++;
	    }
	}

	//...then pivot moved just after them
	tmp = ar[right];
	ar[right] = ar[store];
	ar[store] = tmp;

	return store;
	//return 0;
}

int medianSorters::selectKthIntArray(int *ar, int k, int left, int right)
{
	//select a pivot index (randonly in this case)
	int idx = getPivot(left,right);

	//pivot around that array at that value, and return the position of the pivot
	int pivotIndex = partitionIntArray(ar,left,right,idx);

	//if pivot index *is* median value, return
	if(left+k-1 == pivotIndex)
	{
		return pivotIndex;
	}

	/* Continue the loop, narrowing the range as appropriate. If we are within
	 * the left-hand side of the pivot, then k can stay the same.*/
	if(left+k-1 < pivotIndex)
	{
		return selectKthIntArray(ar,k,left,pivotIndex-1);
	}
	else
	{
		return selectKthIntArray(ar,k-(pivotIndex-left+1), pivotIndex+1,right);
	}
}

void medianSorters::medianSortIntArray(int *ar, int left, int right)
{
	//if the subarray has 1 or fewer elements, then nothing to do
	if(right <= left)
	{
		return;
	}

	//get mid point and median element position (1 <= k <= right-left-1)
	int mid = (right-left+1)/2;
	selectKthIntArray(ar, mid+1, left, right);

	medianSortIntArray(ar,left,left+mid-1);
	medianSortIntArray(ar,left+mid+1,right);

}

int medianSorters::partitionIntPointerArray(int **ar, int left, int right, int pivotIndex)
{
	int *pivot = ar[pivotIndex];

	//move pivot to end of array
	int *tmp = ar[right];
	ar[right] = ar[pivotIndex];
	ar[pivotIndex] = tmp;

	int store = left;

	//all values <= pivot are moved to the beginning of the array...
	for(int idx = left; idx < right; idx++)
	{
		if(*ar[idx] <= *pivot)
	    {
	    	tmp = ar[idx];
	    	ar[idx] = ar[store];
	    	ar[store] = tmp;
	    	store++;
	    }
	}

	//...then pivot moved just after them
	tmp = ar[right];
	ar[right] = ar[store];
	ar[store] = tmp;

	return store;
	//return 0;
}

int medianSorters::selectKthIntPointerArray(int **ar, int k, int left, int right)
{
	int idx = getPivot(left, right);

	int pivotIndex = partitionIntPointerArray(ar,left,right,idx);

	//median element - return
	if(pivotIndex == left+k-1)
	{
		return pivotIndex;
	}

	/* Otherwise, continue the loop, narrowing the range as appropriate.
	 * If we are within th eleft hand side of th epivot, then k can stay the same...
	 */
	if(left+k-1 < pivotIndex)
	{
		return selectKthIntPointerArray(ar, k, left, pivotIndex-1);
	}

	return selectKthIntPointerArray(ar, k-(pivotIndex-left+1), pivotIndex+1, right);
}

void medianSorters::medianSortIntPointerArray(int **ar, int left, int right)
{
	//if the subarray has 1 or fewer elements, nothing to do!
	if(right <= left)
	{
		return;
	}

	int mid = (right-left+1)/2;

	selectKthIntPointerArray(ar,mid+1,left,right);

	medianSortIntPointerArray(ar,left,left+mid-1);
	medianSortIntPointerArray(ar,left+mid+1,right);
}

size_t medianSorters::partitionIntVec(vector<int> & ar, size_t left, size_t right, int pivotIndex)
{
		int pivot = ar[pivotIndex];

		//move pivot to end of array
		int tmp = ar[right];
		ar[right] = ar[pivotIndex];
		ar[pivotIndex] = tmp;

		size_t store = left;

		//all values <= pivot are moved to the beginning of the array...
		for(size_t idx = left; idx < right; idx++)
		{
			if(ar[idx] <= pivot)
		    {
		    	tmp = ar[idx];
		    	ar[idx] = ar[store];
		    	ar[store] = tmp;
		    	store++;
		    }
		}

		//...then pivot moved just after them
		tmp = ar[right];
		ar[right] = ar[store];
		ar[store] = tmp;

		return store;
		//return 0;
}

size_t medianSorters::selectKthIntVec(vector<int> & ar, size_t k, size_t left, size_t right)
{
	//select a pivot index (randonly in this case)
	int idx = getPivot(left,right);

	//pivot around that array at that value, and return the position of the pivot
	size_t pivotIndex = partitionIntVec(ar,left,right,idx);

	//if pivot index *is* median value, return
	if(left+k-1 == pivotIndex)
	{
		return pivotIndex;
	}

	/* Continue the loop, narrowing the range as appropriate. If we are within
	 * the left-hand side of the pivot, then k can stay the same.*/
	if(left+k-1 < pivotIndex)
	{
		return selectKthIntVec(ar,k,left,pivotIndex-1);
	}
	else
	{
		return selectKthIntVec(ar,k-(pivotIndex-left+1), pivotIndex+1,right);
	}
}

void medianSorters::medianSortIntVec(vector<int> & ar, size_t left, size_t right)
{
	//if the subarray has 1 or fewer elements, then nothing to do
	if(right <= left)
	{
		return;
	}

	//get mid point and median element position (1 <= k <= right-left-1)
	size_t mid = (right-left+1)/2;
	selectKthIntVec(ar, mid+1, left, right);

	medianSortIntVec(ar,left,left+mid-1);
	medianSortIntVec(ar,left+mid+1,right);

}

