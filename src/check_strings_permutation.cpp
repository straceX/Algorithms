#include "check_strings_permutation.h"

#include <algorithm>

auto check_strings_permutationv1(const std::string &lhs, const std::string &rhs) 
	-> bool
	{
	if(lhs.length() != rhs.length())
		return false;
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
		if(ascii_set[index])
			return false;
		}
	
	return true;
	}

auto check_strings_permutationv2(std::string &lhs, std::string &rhs) 
	-> bool
	{
	if(lhs.length() != rhs.length())
		return false;

	std::sort(std::begin(lhs), std::end(lhs));
	std::sort(std::begin(rhs), std::end(rhs));

	for(size_t index = 0; index < rhs.length(); ++index)
		{
		if(lhs[index] != rhs[index])
			return false;
		}	
	
	return true;
	}