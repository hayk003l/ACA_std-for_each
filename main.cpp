#include <iostream>
#include "for_each.hpp"
#include <vector>


void print(const std::vector<int>& vec) {
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
}

int main() {
    std::vector<int> vec = {2, 3, 1, 65, 4, 3};
    for_each(vec.begin(), vec.end(), [](int &n) { n++; });
    print(vec);

    return 0;
}