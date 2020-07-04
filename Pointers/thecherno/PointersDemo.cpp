#include <iostream> 
#include <ostream>

#define LOG(x) std::cout << x << std::endl;


int main() {
    int var = 8;
    void* ptr = &var;
    std::cout << ptr << std::endl;
    std::cin.get();
} 
