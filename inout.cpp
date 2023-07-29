// MY_STRUCT.cpp: определяет точку входа для приложения.
//




#include "inout.h"
#include <algorithm>

int main()
{
    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}

