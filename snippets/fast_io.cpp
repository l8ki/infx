#include <iostream>

void fast_io() {
    // Optimizes input/output streams for speed
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

int main() {
    fast_io();
    
    // Always use '\n' instead of std::endl in timed exams.
    // std::endl forces a costly physical hardware flush every time.
    std::cout << "Fast I/O initialized.\n"; 
    return 0;
}