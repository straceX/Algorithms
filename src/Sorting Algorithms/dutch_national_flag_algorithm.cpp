#include "dutch_national_flag_algorithm.h"

#include <algorithm>

auto dutch_national_flag_algorithmv1(int *arry, const size_t size)
	-> void
	{
    auto cnt0 = size_t{0};
    auto cnt1 = size_t{0};
  
    for (auto index = size_t{0}; index < size; ++index) 
        { 
        switch (arry[index])
            { 
            case 0: 
                ++cnt0; 
                break; 
            case 1: 
                ++cnt1; 
                break; 
            case 2:
                break;
            default:
                return; 
            } 
        } 

    for (auto index = size_t{0}; index < size; ++index) 
        { 
        if (index < cnt0)
            arry[index] = 0; 
        else if(index >= cnt0 && index < cnt0 + cnt1)
            arry[index] = 1;
        else
            arry[index] = 2;
        }
	}

auto dutch_national_flag_algorithmv2(int arry[], const size_t size)
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