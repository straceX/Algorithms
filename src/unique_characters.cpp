#include "unique_characters.h"

auto check_all_unique_charactersv1(const std::string &param)
	-> bool
	{
	if (param.length() > 256)
		return false;
	size_t index = 1;
	for(auto ch : param)
		{
		if(param.find(ch, index++) != std::string::npos)
			return false;
		}
	return true;	
	}

auto check_all_unique_charactersv2(const std::string &param) 
	-> bool
	{
	if (param.length() > 256)
		return false;
	auto index = size_t{0};
	bool ascii_set[256] = { false };
	for(auto ch : param)
		{
		index = ch;
		if(ascii_set[index])
			return false;
		ascii_set[index] = true;
		}
	return true;	
	}