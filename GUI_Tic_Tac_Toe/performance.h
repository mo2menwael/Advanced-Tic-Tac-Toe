#ifndef PERFORMANCE_H
#define PERFORMANCE_H

#include <functional>
#include <chrono>
#include <iostream>
#include <windows.h>
#include <psapi.h>
using namespace std;
void response_time(function<void()> computerMoveFunction,const string& functionName);
size_t getMemoryUsage();
double getCpuUsage();

#endif // PERFORMANCE_H
