// MY_STRUCT.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>
#ifndef MY_STRUCT
#define MY_STRUCT
#include <iostream>
#include <vector>
using namespace std;
void print(const std::vector<int>& vec);
void read(std::vector<int>& vec);
inline int x = 0;

#endif

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
