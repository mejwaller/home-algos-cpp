#include <quickSorters.h>
#include <medianSorters.h>
#include <insertionSorters.h>

void quickSorters::qsortIntArray(int *ar, int left, int right, int minSize)
{
	medianSorters ms;

	if(right<=left)
	{
		return;
	}

	int pivotIndex = ms.getPivot(left,right);

	pivotIndex = ms.partitionIntArray(ar,left,right,pivotIndex);

	if(pivotIndex-1-left <= minSize)
	{
		insertionSorters is;


	}

}

