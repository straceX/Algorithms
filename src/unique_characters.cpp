#include "unique_characters.h"

auto check_all_unique_characters(const std::string &param)
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