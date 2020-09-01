#include "check_strings_permutation.h"

auto check_strings_permutation(const std::string &lhs, const std::string &rhs) 
	-> bool
	{
	if(lhs.length() < rhs.length())
		return check_strings_permutation(rhs, lhs);
	
	int ascii_set[256] = {0};
	auto index =  size_t{0};
	for(auto ch : lhs)
		{ 
		index = ch; 
		++ascii_set[index]; 
		}

	for(auto ch : rhs)
		{ 
		index = ch; 
		--ascii_set[index]; 
		}

	for(index = 0; index < 256; ++index)
		{
		if(ascii_set[index] < 0)
			return false;
		}
	
	return true;
	}