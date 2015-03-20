// taken from malloc_debug_common.cpp

#include <stdint.h>
#include <malloc.h>

// do-nothing version of the function from the file above
void get_malloc_leak_info(uint8_t** info, size_t* overallSize,
        size_t* infoSize, size_t* totalMemory, size_t* backtraceSize) {
        return;
}

void free_malloc_leak_info(uint8_t* info) {
    free(info);
}
