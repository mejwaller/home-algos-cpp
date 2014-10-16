/*
 * misc.h
 *
 *  Created on: 3 Oct 2011
 *      Author: martin
 */

#ifndef MISC_H_
#define MISC_H_

#include <vector>

class misc
{

public:
	void add(int *n1,int size1,int *n2,int *sum);
	void add(const std::vector<int> &n1, const std::vector<int> &n2, std::vector<int> &sum);

	void last(int *n1,int size1,int *n2,int *sum);
	void last(const std::vector<int> &n1, const std::vector<int> &n2, std::vector<int> &sum);

};

template<typename C> class String
{
	private:
		struct Srep;
		Srep *srep;

	public:
		String(){}
		String(const C*);
		String(const String &);
		C read (int i) const;
};

/*template<typename C> String<C>::String<C>()
{

}*/



#endif /* MISC_H_ */
