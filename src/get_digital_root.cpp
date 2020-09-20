#include "get_digital_root.h"

auto get_number_of_digits(unsigned int param)
    -> size_t
    {
    auto num = size_t{0};
    while (param > 9)
        {
        ++num;
        param /= 10;
        }
    ++num;
    return num;
    }

auto get_digital_root(int param)
    -> std::vector<size_t>
    {
    param = std::abs(param);
    auto roots = std::vector<size_t>{};
    roots.reserve(get_number_of_digits(param));
    while (param > 9)
        {
        roots.push_back(param % 10);
        param /= 10;
        }
    roots.push_back(param);
    return roots;
    }