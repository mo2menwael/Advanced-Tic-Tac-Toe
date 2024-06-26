#include "performance.h"

void response_time(function<void()> computerMoveFunction,const string& functionName)
{
    auto start = chrono::high_resolution_clock::now();

    computerMoveFunction(); // Call the specified function

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    cout << functionName << " Ai move response time: " << elapsed.count() * 1000 << " ms" << endl;
}

size_t getMemoryUsage() {
    PROCESS_MEMORY_COUNTERS_EX pmc;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
    return pmc.WorkingSetSize;
}

double getCpuUsage() {
    FILETIME idleTime, kernelTime, userTime;
    ULARGE_INTEGER sysIdleTime, sysKernelTime, sysUserTime;

#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic ignored "-Wmissing-braces"

    static ULARGE_INTEGER prevIdleTime = {0}, prevKernelTime = {0}, prevUserTime = {0};

    if (!GetSystemTimes(&idleTime, &kernelTime, &userTime)) {
        // Handle system call failure
        // For simplicity, returning -1.0 as an error indicator
        return -1.0;
    }

    // Convert FILETIME structure to ULARGE_INTEGER to access QuadPart
    memcpy(&sysIdleTime, &idleTime, sizeof(FILETIME));
    memcpy(&sysKernelTime, &kernelTime, sizeof(FILETIME));
    memcpy(&sysUserTime, &userTime, sizeof(FILETIME));

    ULONGLONG idleTimeDiff = sysIdleTime.QuadPart - prevIdleTime.QuadPart;
    ULONGLONG kernelTimeDiff = sysKernelTime.QuadPart - prevKernelTime.QuadPart;
    ULONGLONG userTimeDiff = sysUserTime.QuadPart - prevUserTime.QuadPart;

    double cpuUsage = 0.0;

    if (prevIdleTime.QuadPart != 0) {
// Ensure non-negative values
#pragma GCC diagnostic ignored "-Wtype-limits"
        if (idleTimeDiff >= 0 && kernelTimeDiff >= 0 && userTimeDiff >= 0) {
            cpuUsage = 100.0 - (
                           (idleTimeDiff * 100.0) / (kernelTimeDiff + userTimeDiff)
                           );
        } else {
            // Handle unexpected negative values or other anomalies
            // Example: Return -1.0 as an error indicator
            cpuUsage = -1.0;
        }
    }

    prevIdleTime = sysIdleTime;
    prevKernelTime = sysKernelTime;
    prevUserTime = sysUserTime;

    return cpuUsage;
}
