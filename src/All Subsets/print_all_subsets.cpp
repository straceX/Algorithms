#include "print_all_subsets.h"

#include <cmath>
#include <iostream>

auto print_all_subsets(std::vector<int> &ivec)
    -> void    
    {
    if (!ivec.size())
    	return;
    auto size = ivec.size();
    auto count = pow(2, size);

    for (auto iter = 0; iter < count; ++iter)
        {
        for (auto jter = 0; jter < size; ++jter) 
            {
            if ((1 << jter) & iter)
                std::cout << ivec[jter] << " ";
            }
        std::cout << "\n";
        }        
    }