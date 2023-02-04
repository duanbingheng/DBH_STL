#pragma once
#include <sys/time.h>
#include <unistd.h>
#include <iostream>
#include <chrono>
#include <cstdint>

using namespace std;
#define GETTIME(time)                                     \
    {                                                     \
        struct timeval lTime;                             \
        gettimeofday(&lTime, 0);                          \
        *time = (lTime.tv_sec * 1000000 + lTime.tv_usec); \
    }