#include "rotate_left_right.h"

auto rotRight(std::vector<int> &ivec, int nrotate)
    -> std::vector<int>
    {
    if (ivec.size() < 1 || nrotate < 1)
        return ivec;
    auto index = 0;
    auto size  = ivec.size();
    auto tmp   = 0;
    for (auto iter = size - nrotate; iter < size; ++iter)
        {
        for (auto jter = iter; jter > index; --jter)
            {
            tmp = ivec[jter];
            ivec[jter] = ivec[jter - 1];
            ivec[jter - 1] = tmp;
            }
        ++index;
        }
    return ivec;
    }

auto rotLeft(std::vector<int> &ivec, int nrotate)
    ->std::vector<int>
    {
        if (ivec.size() < 1 || nrotate < 1)
            return ivec;
        auto tmp = 0;
        for (auto iter = 0; iter < nrotate; ++iter)
            {
            for (auto jter = 0; jter < ivec.size() - 1; ++jter)
                {
                tmp = ivec[jter];
                ivec[jter] = ivec[jter + 1];
                ivec[jter + 1] = tmp;
                }
            }
        return ivec;
    }