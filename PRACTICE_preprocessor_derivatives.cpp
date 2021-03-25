#include<iostream>

// To define

#define SAMPLE_SIZE 100
#undef SAMPLE_SIZE
#define SAMPLE_SIZE 250

// Macros to check. #ifdef, #ifndef, #if, #endif, #else and #elif

#ifdef SAMPLE_SIZE
#define SAMPLE_SIZE 900
#endif

#ifndef FUN_FACTOR
#define FUN_FACTOR 10000
#else
#define FUN_FACTOR 19999
#endif

int main(){
    std::cout << SAMPLE_SIZE << std::endl;
    std::cout << FUN_FACTOR << std::endl;
    return 0;
}