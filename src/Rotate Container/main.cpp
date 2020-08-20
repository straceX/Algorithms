#include "rotate_left_right.h"

#include <iostream>

int main()
	{
	auto testContainer = std::vector<int>{ 1,2,3,4,5};
	rotRight(testContainer, 2);
	for (auto i : testContainer)
		std::cout << i << " ";
	std::cout << '\n';
	rotLeft(testContainer, 2);
	for (auto i : testContainer)
		std::cout << i << " ";
	std::cout << '\n';
	return 0;
	}