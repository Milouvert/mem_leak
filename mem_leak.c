#include <stdlib.h>

/**
 * @brief Allocates a specified amount of memory (in bytes).
 * 
 * @param size Size of memory to allocate (in bytes)
 * @return int* Just so we can free the memory if desired
 */
int* assign_mem(int size) {
    int* arr = malloc(size);
    return arr;
}

int main() {

    while (1) {
        int* ptr = assign_mem(1);
        // free(ptr);
    }

    return 0;
}
