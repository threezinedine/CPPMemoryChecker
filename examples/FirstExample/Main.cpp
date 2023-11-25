#include <iostream>
#include <CPPMemoryChecker/CPPMemoryChecker.hpp>

ntt::memory::MemoryChecker checker;

int main(void)
{
    int *sValues = new int[5];
    std::cout << "Hello World" << std::endl;
    return 0;
}