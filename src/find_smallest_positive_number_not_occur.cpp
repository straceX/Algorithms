#include "find_smallest_positive_number_not_occur.h"

#include <algorithm>

auto find_smallest_positive_number_not_occurv1(std::vector<int> &param) 
    -> int
    {
    std::sort(param.begin(), param.end());
    int result = 1;
    for (size_t index = 0; index < param.size(); ++index)
        {
        if (param[index] < 1)
            continue;
        if (param[index] == result)
            {
            while (param[index] == result)
                ++index;
            --index;
            ++result;
            continue;
            }
        return result;
        }
    return result;
    }

auto find_smallest_positive_number_not_occurv2(const std::vector<int> &param)
    -> int
    {
    auto result = size_t{ 1 };
    for (size_t index = 0; index < param.size(); ++index)
        {
        if (auto res = std::find(std::begin(param), std::cend(param), result); res == std::cend(param))
            return result;
        ++result;
        }
    return result;
    }