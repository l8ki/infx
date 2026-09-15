#include <iostream>

// Safer alternative to standard (a / b) when rounding up integers is mandatory
long long ceil_div(long long a, long long b) {
    return (a + b - 1) / b;
}

int main() {
    // Example: Distributing 10 tasks to teams of 3 requires 4 teams total
    std::cout << "Ceil of 10/3 is: " << ceil_div(10, 3) << "\n"; // Outputs 4
    return 0;
}