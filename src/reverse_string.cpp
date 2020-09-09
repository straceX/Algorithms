#include "reverse_string.h"

//Implementation of reversing null-terminated string.
//Note : not use additional data structures.
auto reverse_string(char * const param) 
	-> char*
	{
	auto start = param;
	auto size  = size_t{0};
	while(*start++ != '\0')
		++size;
	if(!size)
		return param;
	auto opcount = static_cast<size_t>(size/2);
	auto ch      = char{0};
	auto index   = size_t{0}; 
	for(size_t iter = 0; iter < opcount; ++iter)
		{
		index		 = size - iter - 1;
		ch           = param[iter];
		param[iter]  = param[index];
		param[index] = ch;
		}

	return param;
	}