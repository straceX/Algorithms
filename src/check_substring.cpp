#include "check_substring.h"

auto check_substring(const std::string &lhs, const std::string &rhs) 
	-> bool
	{
	if(lhs.length() > rhs.length())
		return check_substring(rhs, lhs);

	constexpr const size_t ASCII_LENGTH{256};	
	int ascii_set[ASCII_LENGTH] = {0};
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

	for(index = 0; index < ASCII_LENGTH; ++index)
		{
		if(ascii_set[index] > 0)
			return false;
		}
	
	return true;
	}