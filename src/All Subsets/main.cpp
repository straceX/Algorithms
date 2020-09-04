#include <iostream>

#include "print_all_subsets.h"

/* Driver program to test print_all_subsets function */
int main()
{
    int size, inputVal;
    
    std::cout << "Enter size of the elements\n";
    std::cin >> size;

    auto elements = std::vector<int>{};
    elements.reserve(size);
    std::cout << "Enter elements:\n";
    for (auto i = 0; i < size; ++i)
        {
        std::cin >> inputVal;
        elements.push_back(inputVal);
        }

    print_all_subsets(elements);
    return 0;
}