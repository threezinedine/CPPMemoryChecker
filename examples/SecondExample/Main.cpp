#include <iostream>
#include <memory>
#include <CPPMemoryChecker/CPPMemoryChecker.hpp>

ntt::memory::MemoryChecker checker;

int main(void)
{
    std::shared_ptr<int> val = std::make_shared<int>(3);
    std::cout << "Hello World" << std::endl;
    return 0;
}