#ifndef STRINGINTMAP_H
#define STRINGINTMAP_H

#include <string>
#include <iostream>

class StringIntMap
{

	private:
		int intPart;
		std::string stringPart;

	public:
		//StringIntMap(){}
		StringIntMap(const std::string & astring, const int & anint)
		{
			stringPart = astring;
			intPart = anint;
		}

		int intpart() const
		{
			return intPart;
		}

		std::ostream & print(std::ostream & os) const
		{
			return std::cout << "(" << stringPart << "," << intPart << ")" << std::endl;
		}
};

//bool operator>(const StringIntMap& lhs, const StringIntMap& rhs);

bool operator>(const StringIntMap& lhs, const StringIntMap& rhs);

std::ostream & operator<<(std::ostream & os, const StringIntMap & si);

#endif //STRINGINTMAP_H
