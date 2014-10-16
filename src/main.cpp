//============================================================================
// Name        : helloworld.cpp
// Author      : mwaller
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <misc.h>
#include <stringIntMap.h>
#include <insertionSorters.h>
#include <medianSorters.h>

using namespace std;

int main(int argc, char **argv)
{

	//sorters sorter;

	/*misc amisc;

	int n1[3] = {1,2,3};
	int n2[3] = {1,2,3};

	cout << "array size of n1 is " << sizeof(n1) <<  "/" << sizeof(int) << " = " << sizeof(n1)/sizeof(int) << endl;
	int *sum = new int[sizeof(n1)/sizeof(int) + 1];

	amisc.add(n1,sizeof(n1)/sizeof(int),n2,sum);

	cout << "Returned from misc::add..." << endl;

	delete[] sum;

	sum = new int[sizeof(n1)/sizeof(int) + 1];

	cout << "calling msic::last..." << endl;

	amisc.last(n1,sizeof(n1)/sizeof(int),n2,sum);

	delete[] sum;

	vector<int> vn1;
	vector<int> vn2;

	cout << "sizeof vn1 is " << vn1.size() << endl;
	cout << "sizeof vn2 is " << vn2.size() << endl;

	vn1.push_back(1);
	vn1.push_back(2);
	vn1.push_back(3);

	vn2.push_back(1);
	vn2.push_back(2);
	vn2.push_back(3);

	vector<int> vsum = vector<int>(vn1.size()+1);

	cout << "sizeof vn1 is " << vn1.size() << endl;
	cout << "sizeof vn2 is " << vn2.size() << endl;
	cout << "sizeof vsum is " << vsum.size() << endl;

	amisc.add(vn1,vn2,vsum);

	amisc.last(vn1,vn2,vsum);
	*/

	/*
	sorters sorter;

	int *intsToSort = new int[5];

	intsToSort[0] = 3;
	intsToSort[1] = 1;
	intsToSort[2] = 5;
	intsToSort[3] = 4;
	intsToSort[4] = 1;

	cout << "sorting:";

	for(int i = 0; i< 5; i++)
	{

		cout << " " << intsToSort[i];

	}

	cout << endl;

	sorter.insertionSortIntArray(intsToSort,5);

	cout << "sorted values are:";
	for(int i = 0; i< 5; i++)
	{

		cout << " " << intsToSort[i];

	}

	cout << endl;

	delete [] intsToSort;

	int first = 3;
	int second = 1;
	int third = 5;
	int fourth = 4;
	int fifth  = 1;

	int* one = &first;
	int* two = &second;
	int* three = &third;
	int* four = &fourth;
	int* five = &fifth;

	int *intpointers[] = {one,two,three,four,five};

	cout << "sorting:";

	for(int i = 0; i< 5; i++)
	{
		cout << " " << *intpointers[i];
	}

	cout << endl;

	sorter.insertionSortIntPointers(intpointers,5);

	cout << "sorted values are:";

	for(int i = 0; i< 5; i++)
	{

		cout << " " << *intpointers[i];

	}
	*/

	/*
	String<char> cs;
	String<unsigned char> us;
	String<wchar_t> ws;
	*/

	/*
	insertionSorters is;

	vector<int> tosort(5);

	tosort[0] = 3;
	tosort[1] = 1;
	tosort[2] = 5;
	tosort[3] = 4;
	tosort[4] = 1;

	cout << "sorting:";

	for(size_t i = 0; i< 5; i++)
	{

		cout << " " << tosort[i];

	}

	cout << endl;

	is.insertionSortTVec(tosort);

	cout << "sorted values are:";
	for(size_t i = 0; i< 5; i++)
	{

		cout << " " << tosort[i];

	}

	cout << endl;

	vector<double> dtosort(5);

	dtosort[0] = 3.1;
	dtosort[1] = 1.1;
	dtosort[2] = 5.1;
	dtosort[3] = 4.1;
	dtosort[4] = 1.2;

	cout << "sorting:";

	for(size_t i = 0; i< 5; i++)
	{

		cout << " " << tosort[i];

	}

	cout << endl;

	is.insertionSortTVec(dtosort);

	cout << "sorted values are:";
	for(size_t i = 0; i< 5; i++)
	{
		cout << " " << dtosort[i];
	}

	cout << endl;

	StringIntMap si1 = StringIntMap("one",1);
	StringIntMap si2 = StringIntMap("two",2);
	StringIntMap si3 = StringIntMap("three",3);
	StringIntMap si4 = StringIntMap("four",4);
	StringIntMap si5 = StringIntMap("five",5);

	vector<StringIntMap> sisort;

	sisort.push_back(si5);
	sisort.push_back(si4);
	sisort.push_back(si3);
	sisort.push_back(si2);
	sisort.push_back(si1);

	cout << "sorting:" << endl;

	for(size_t i = 0; i< 5; i++)
	{

		cout << " " << sisort[i];

	}

	is.insertionSortTVec(sisort);

	cout << "sorted values are:";

	for(size_t i = 0; i< 5; i++)
	{

		cout << " " << sisort[i];

	}

	//end of insertionSorters
	*/

	//start of medianSorters
	medianSorters ms;
	/*
	int array[16]={15,9,8,1,4,11,7,12,13,6,5,3,16,2,10,14};

	cout << "Median sorting array ";

	for(int i=0; i< 15; i++)
	{
		cout << array[i] << ", ";
	}

	cout << array[15] << endl;

	medianSorters ms;

	ms.medianSortIntArray(array,0,15);

	cout << "Median sorted array is now ";

	for(int i=0; i< 15; i++)
	{
		cout << array[i] << ", ";
	}

	cout << array[15] << endl;

	int otherArray[16]={15,9,8,1,4,11,7,12,13,6,5,3,16,2,10,14};

	int *one = &otherArray[0];
	int *two = &otherArray[1];
	int *three = &otherArray[2];
	int *four = &otherArray[3];
	int *five = &otherArray[4];
	int *six = &otherArray[5];
	int *seven = &otherArray[6];
	int *eight = &otherArray[7];
	int *nine = &otherArray[8];
	int *ten = &otherArray[9];
	int *eleven = &otherArray[10];
	int *twelve = &otherArray[11];
	int *thirteen = &otherArray[12];
	int *fourteen = &otherArray[13];
	int *fifteen = &otherArray[14];
	int *sixteen = &otherArray[15];

	int *intPointers[] = {one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen};

	//int pivot = ms.getPivot(0,15);

	//cout << "Partioning following array on pivot index " << pivot << ":" << endl;

	cout << "Median sorting following array: " << endl;

	for(int i = 0; i < 15; i++)
	{
		cout << *intPointers[i] << ",";
	}

	cout << *intPointers[15] << endl;

	//ms.partitionIntPointerArray(intPointers,0,15,pivot);

	//cout << "After partitioning: " << endl;

	ms.medianSortIntPointerArray(intPointers,0,15);

	cout << "After median sorting: " << endl;

	for(int i = 0; i < 15; i++)
	{
		cout << *intPointers[i] << ",";
	}

	cout << *intPointers[15] << endl;
	*/

	vector<int> ints(16);

	ints[0] = 15;
	ints[1] = 9;
	ints[2] = 8;
	ints[3] = 1;
	ints[4] = 4;
	ints[5] = 11;
	ints[6] = 7;
	ints[7] = 12;
	ints[8] = 13;
	ints[9] = 6;
	ints[10] = 5;
	ints[11] = 3;
	ints[12] = 16;
	ints[13] = 2;
	ints[14] = 10;
	ints[15] = 14;

	//int vecPivot = ms.getPivot(0,ints.size() - 1);

	cout << "median sorting vector: ";

	for(size_t i=0; i<ints.size() - 1 ; i++)
	{
		cout << ints[i] << ", ";
	}

	cout << ints[ints.size() - 1] << endl;

	ms.medianSortIntVec(ints,0,ints.size()-1);

	cout << "Sorted vector is: " << endl;

	for(size_t i=0; i<ints.size() - 1 ; i++)
	{
		cout << ints[i] << ", ";
	}

	cout << ints[ints.size() - 1] << endl;

	//end of medianSortIntVec

	//start medianSortTVec
	ints[0] = 15;
	ints[1] = 9;
	ints[2] = 8;
	ints[3] = 1;
	ints[4] = 4;
	ints[5] = 11;
	ints[6] = 7;
	ints[7] = 12;
	ints[8] = 13;
	ints[9] = 6;
	ints[10] = 5;
	ints[11] = 3;
	ints[12] = 16;
	ints[13] = 2;
	ints[14] = 10;
	ints[15] = 14;

	//int vecPivot = 9;
	//int vecPivot = ms.getPivot(0,ints.size() - 1);

	cout << "Sorting T (int) vec:" << endl;

	for(size_t i=0; i<ints.size() - 1 ; i++)
	{
		cout << ints[i] << ", ";
	}

	cout << ints[ints.size() - 1] << endl;

	ms.medianSortTVec(ints,0,ints.size()-1);

	cout << "after sorting: " << endl;

	for(size_t i=0; i<ints.size() - 1 ; i++)
	{
		cout << ints[i] << ", ";
	}

	cout << ints[ints.size() - 1] << endl;

	vector<double> ds(16);

	ds[0] = 1.5;
	ds[1] = .9;
	ds[2] = .8;
	ds[3] = .1;
	ds[4] = .4;
	ds[5] = 1.1;
	ds[6] = .7;
	ds[7] = 1.2;
	ds[8] = 1.3;
	ds[9] = .6;
	ds[10] = .5;
	ds[11] = .3;
	ds[12] = 1.6;
	ds[13] = .2;
	ds[14] = 1.0;
	ds[15] = 1.4;

	cout << "Sorting T (double) vec:" << endl;

	for(size_t i=0; i<ds.size() - 1 ; i++)
	{
		cout << ds[i] << ", ";
	}

	cout << ds[ds.size() - 1] << endl;

	ms.medianSortTVec(ds,0,ds.size()-1);

	cout << "after sort: " << endl;

	for(size_t i=0; i<ds.size() - 1 ; i++)
	{
		cout << ds[i] << ", ";
	}

	cout << ds[ds.size() - 1] << endl;

	vector<StringIntMap> sisort;

	sisort.push_back(StringIntMap("fifteen",15));
	sisort.push_back(StringIntMap("nine",9));
	sisort.push_back(StringIntMap("eight",8));
	sisort.push_back(StringIntMap("one",1));
	sisort.push_back(StringIntMap("four",4));
	sisort.push_back(StringIntMap("eleven",11));
	sisort.push_back(StringIntMap("seven",7));
	sisort.push_back(StringIntMap("twelve",12));
	sisort.push_back(StringIntMap("thirteen",13));
	sisort.push_back(StringIntMap("six",6));
	sisort.push_back(StringIntMap("five",5));
	sisort.push_back(StringIntMap("three",3));
	sisort.push_back(StringIntMap("sixteen",16));
	sisort.push_back(StringIntMap("two",2));
	sisort.push_back(StringIntMap("ten",10));
	sisort.push_back(StringIntMap("fourteen",14));


	cout << "sorting:" << endl;

	for(size_t i = 0; i< sisort.size(); i++)
	{

		cout << " " << sisort[i];

	}

	ms.medianSortTVec(sisort,0,sisort.size()-1);

	cout << "after sorting: " << endl;

	for(size_t i = 0; i< sisort.size(); i++)
	{
		cout << " " << sisort[i];
	}





	cout << "Program end." << endl;

	return 0;

}
