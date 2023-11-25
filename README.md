# CPPMemoryChecker
library for checking memory leak

## Example

``` C++
#include <iostream>
#include <CPPMemoryChecker/CPPMemoryChecker.hpp>

ntt::memory::MemoryChecker checker;

int main(void)
{
    int *sValues = new int[5];
    std::cout << "Hello World" << std::endl;
    return 0;
}
```

The output
``` cmd
Hello World
Found leaked object at 0x000001b5cbef6668 (size 20[bytes]) allocated in: Unknown:0
Number of leaked objects: 1
Total amount of memory leaked: 20
```