#include <algorithm>
#include <iostream>

#include "UniqueName.h"

//with STL
auto printUniqueName(const std::vector<std::string> &names)
    -> void
    {
    for (auto it = std::cbegin(names); it < std::cend(names); ++it)
        {
        if (auto result = std::find(it + 1, std::cend(names), *it); result == std::cend(names))
            std::cout << *it << '\n';
        }
    }

