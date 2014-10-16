#include <stringIntMap.h>

bool operator>(const StringIntMap& lhs, const StringIntMap& rhs)
{
	return lhs.intpart() > rhs.intpart();
}

std::ostream & operator<<(std::ostream & os, const StringIntMap & si)
{
	return si.print(os);
}
