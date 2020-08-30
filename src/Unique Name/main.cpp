#include "./UniqueName.h"

int main()
    {
    auto names = std::vector<std::string>{ "Charlie", 
                                           "Max", 
                                           "Buddy",
                                           "Oscar", 
                                           "Milo", 
                                           "Archie", 
                                           "Ollie",
                                           "Teddy",
                                           "Toby",
                                           "Max",
                                           "Jack",
                                           "Charlie",
                                           "Teddy" };
    printUniqueName(names);    
    return 0;
    }