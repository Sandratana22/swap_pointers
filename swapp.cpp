#include "swapp.h"

namespace SwapNumber {
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
