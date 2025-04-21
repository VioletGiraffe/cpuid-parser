# cpuid-parser
Single-header library and sample code to obtain and parse CPUID. Supports Windows (MSVC) and Linux (GCC / Clang), not tested on macOS.

Forked from https://gist.github.com/9prady9/a5e1e8bdbc9dc58b3349


Known issues:
* The thread count and HT detection is incorrect on hybrid CPUs (e. g. Alder Lake, Raptor Lake). Correct detection is complicated and requires multiple threads.
