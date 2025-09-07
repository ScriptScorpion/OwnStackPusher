#include "../include/blueprint.h"
#include <cstdint>
uint64_t push(const char* message) {
    uint64_t adress {};
    asm(
        ".intel_syntax noprefix \n\t"
        "push rbp \n\t"
        "mov r8, %[message] \n\t"
        "push r8 \n\t"
        "mov %[addr], rsp \n\t"
        "pop rbp \n\t"
        "pop rbp \n\t"
        ".att_syntax prefix \n\t"
        : [addr] "=r"(adress)
        : [message] "r"(message)
        : "r8", "memory"
    );
    return adress;

}
uint64_t push(const uint64_t value) {
    uint64_t adress {};
    asm(
        ".intel_syntax noprefix \n\t"
        "push rbp \n\t"
        "mov r8, %[value] \n\t"
        "push r8 \n\t"
        "mov %[addr], rsp \n\t"
        "pop rbp \n\t"
        "pop rbp \n\t"
        ".att_syntax prefix \n\t"
        : [addr] "=r"(adress)  
        : [value] "r"(value)
        : "r8", "memory"
    );
    return adress;
 
}
