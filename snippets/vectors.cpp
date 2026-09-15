#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {42, 7, 19, 99, 1};

    // 1. Standard sort (Ascending)
    std::sort(nums.begin(), nums.end());

    // 2. Custom inline sort using a lambda function (Descending)
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });

    // 3. Modern C++ Range-based print loop
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;
}