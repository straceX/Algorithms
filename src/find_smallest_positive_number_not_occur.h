#pragma once

#include <vector>

//find smallest positive integer that does not occur in container
//Note: update container | complexity : O(N) or O(N * log(N)) 
auto find_smallest_positive_number_not_occur(std::vector<int> &param) -> int;