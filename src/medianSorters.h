#ifndef MEDIANSORTERS_H_
#define MEDIANSORTERS_H_

#include <vector>

class medianSorters
{
	public:
		int getPivot(int left, int right);

		int partitionIntArray(int *ar, int left, int right, int pivotIndex);
		int selectKthIntArray(int *ar, int k, int left, int right);
		void medianSortIntArray(int *ar, int left, int right);

		int partitionIntPointerArray(int **ar, int left, int right, int pivotIndex);
		int selectKthIntPointerArray(int **ar, int k, int left, int right);
		void medianSortIntPointerArray(int **ar, int left, int right);

		size_t partitionIntVec(std::vector<int> & ar, size_t left, size_t right, int pivotIndex);
		size_t selectKthIntVec(std::vector<int>& ar, size_t k, size_t left, size_t right);
		void medianSortIntVec(std::vector<int> & ar, size_t left, size_t right);

		template<typename T> size_t partitionTVec(std::vector<T> &, size_t left, size_t righ, int pivotIndex);
		template<typename T> size_t selectKthTVec(std::vector<T>& ar, size_t k, size_t left, size_t right);
		template<typename T> void medianSortTVec(std::vector<T> & ar, size_t left, size_t right);
};

template<typename T> size_t medianSorters::partitionTVec(std::vector<T> & ar, size_t left, size_t right, int pivotIndex)
{
		T pivot = ar[pivotIndex];

		//move pivot to end of array
		T tmp = ar[right];
		ar[right] = ar[pivotIndex];
		ar[pivotIndex] = tmp;

		size_t store = left;

		//all values <= pivot are moved to the beginning of the array...
		for(size_t idx = left; idx < right; idx++)
		{
			//if(ar[idx] <= pivot)
			if(pivot > ar[idx])
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

template<typename T> size_t medianSorters::selectKthTVec(std::vector<T> & ar, size_t k, size_t left, size_t right)
{

	int idx = getPivot(left, right);

	size_t pivotIndex = partitionTVec(ar, left, right, idx);

	if(left+k-1 == pivotIndex)
	{
		//we have kth value return its index
		return pivotIndex;
	}

	if(left+k-1 < pivotIndex)
	{
		return selectKthTVec(ar,k,left,pivotIndex-1);
	}
	else
	{
		return selectKthTVec(ar,k-(pivotIndex-left+1), pivotIndex+1, right);
	}
}

template<typename T> void medianSorters::medianSortTVec(std::vector<T> & ar, size_t left, size_t right)
{
	if(right <= left)
	{
		return;
	}

	size_t mid = (right - left + 1)/2;

	size_t me = selectKthTVec(ar,mid+1, left, right);

	medianSortTVec(ar,left,left+mid-1);
	medianSortTVec(ar,left+mid+1,right);
}


#endif //MEDIANSORTERS_H_
