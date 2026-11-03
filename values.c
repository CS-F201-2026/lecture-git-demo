/* A4: AI-assisted instructor example. */
#include "values.h"
int sum_values(const int values[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += values[i];
    }
    return total;
}
