#include <iostream>
#include <type_traits>

int main() {
    auto large_value = 2000000000LL; // LL suffix forces a long long literal

    if (sizeof(large_value) > 4) {
        std::cout << "Safe! Variable size is " << sizeof(large_value) << " bytes (64-bit).\n";
    } else {
        std::cout << "Warning: 32-bit constraint risk detected.\n";
    }
    return 0;
}