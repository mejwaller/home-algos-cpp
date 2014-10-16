/*
 * misc.cpp
 *
 *  Created on: 3 Oct 2011
 *      Author: martin
 */

#include <misc.h>
#include <iostream>

using namespace std;

void misc::add(int *n1, int size1, int *n2, int *sum)
{
	int position = size1 - 1;

	int carry = 0;

	while(position >= 0)
	{
		int total = n1[position] + n2[position] + carry;

		sum[position+1] = total % 10;
		if(total > 9)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}

		position--;
	}

	sum[0] = carry;

	cout << n1[0] << n1[1] << n1[2] << " + " << n2[0] << n2[1] << n2[2] << " = " << sum[0] << sum[1] << sum[2] << sum[3] << endl;

}

void misc::last(int *n1, int size1, int *n2, int *sum)
{
	int position = size1 - 1;

	int carry = 0;

	cout << "last: position is "  << position << endl;

	while(--position >= 0)
	{
		int total = n1[position] + n2[position] + carry;

		if(total > 9)
		{
			sum[position+1] = total - 10;
			carry = 1;
		}
		else
		{
			sum[position+1] = total;
			carry = 0;
		}
	}

	sum[0]=carry;

	cout << n1[0] << n1[1] << n1[2] << " + " << n2[0] << n2[1] << n2[2] << " = " << sum[0] << sum[1] << sum[2] << sum[3] << endl;
}

void misc::add(const vector<int> &n1, const vector<int> &n2, vector<int> &sum)
{
	cout << "sizeof n1 is " << n1.size() << endl;
	int position = n1.size()-1;

	int carry = 0;

	while(position >= 0)
	{
		int total = n1[position] + n2[position] + carry;

		sum[position+1] = total % 10;

		if(total > 9)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}

		position--;

	}

	sum[0] = carry;

	cout << n1[0] << n1[1] << n1[2] << " + " << n2[0] << n2[1] << n2[2] << " = " << sum[0] << sum[1] << sum[2] << sum[3] << endl;

}

void misc::last(const vector<int> &n1, const vector<int> &n2, vector<int> &sum)
{
	cout << "sizeof n1 is " << n1.size() << endl;
	int position = n1.size()-1;

	int carry = 0;

	while(--position >= 0)
	{
		int total = n1[position] + n2[position] + carry;

		if(total > 9)
		{
			sum[position+1] = total - 10;
			carry = 1;
		}
		else
		{
			sum[position+1] = total;
			carry = 0;
		}

	}

	sum[0] = carry;

	cout << n1[0] << n1[1] << n1[2] << " + " << n2[0] << n2[1] << n2[2] << " = " << sum[0] << sum[1] << sum[2] << sum[3] << endl;

}

/*template<typename C> String<C>::String<C>()
{

}*/
