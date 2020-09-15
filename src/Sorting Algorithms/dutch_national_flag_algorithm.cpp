#include "dutch_national_flag_algorithm.h"

#include <algorithm>

auto dutch_national_flag_algorithm(int arry[], const size_t size)
	-> void
	{
	auto sindex = size_t{0};
	auto mindex = size_t{0};
	auto eindex = size_t{size - 1 };
	while(mindex <= eindex)
		{
		switch (arry[mindex]) 
			{ 
  	    	case 0: 
        		std::swap(arry[sindex++], arry[mindex++]); 
            	break;
        	case 1: 
            	++mindex; 
            	break; 
        	case 2: 
            	std::swap(arry[mindex], arry[eindex--]); 
            	break; 
        	} 
		}
	}