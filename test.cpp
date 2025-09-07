#include "./include/blueprint.h"
#include <iostream>
#include <cstring>
int main() {
    auto p = push(10); // example
    auto c = push("hi"); // example
    // two ways to get value(data_type - it is type of data you pushed)
    // data_type per = (*(data_type*)p);
    // data_type rep = *reinterpret_cast<data_type*>(p);
}
