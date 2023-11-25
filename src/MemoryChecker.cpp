#include <iostream>
#include "CPPMemoryChecker/MemoryChecker.hpp"
#include "memplumber.h"

namespace ntt::memory
{
    MemoryChecker::MemoryChecker()
    {
        MemPlumber::start();
    }

    MemoryChecker::~MemoryChecker()
    {
        size_t memLeakCount;
        uint64_t memLeakSize;
        MemPlumber::memLeakCheck(memLeakCount, memLeakSize, true);

        std::cout << "Number of leaked objects: " << (int)memLeakCount << std::endl
                  << "Total amount of memory leaked: " << (int)memLeakSize << std::endl;
    }
} // namespace ntt::memory
