#pragma once

#include <vector>

//find smallest positive integer that does not occur in container
//Note: update container | complexity : O(N) or O(N * log(N)) 
auto find_smallest_positive_number_not_occurv1(std::vector<int> &param) -> int;

//find smallest positive integer that does not occur in container
//Note: container is const | complexity :
auto find_smallest_positive_number_not_occurv2(const std::vector<int> &param) -> int;

//finding just one element not exist in array 
//array is sorted and need to not exist negative elements
auto find_missing_element(int arry[], size_t size) -> int;