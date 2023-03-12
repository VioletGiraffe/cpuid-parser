#include "cpuinfo.hpp"

#include <iostream>
using namespace std;

int main()
{
    CPUInfo cinfo;

    cout << "CPU vendor = " << cinfo.vendor() << endl;
    cout << "CPU Brand String = " << cinfo.model() << endl;
    cout << "# of cores = " << cinfo.cores() << endl;
    cout << "# of logical cores = " << cinfo.logicalCpus() << endl;
    cout << "Is CPU Hyper threaded = " << cinfo.isHyperThreaded() << endl;
    cout << "CPU SSE = " << cinfo.isSSE() << endl;
    cout << "CPU SSE2 = " << cinfo.isSSE2() << endl;
    cout << "CPU SSE3 = " << cinfo.isSSE3() << endl;
    cout << "CPU SSE41 = " << cinfo.isSSE41() << endl;
    cout << "CPU SSE42 = " << cinfo.isSSE42() << endl;
    cout << "CPU AVX = " << cinfo.isAVX() << endl;
    cout << "CPU AVX2 = " << cinfo.isAVX2() << endl;

    return 0;
}