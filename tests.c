/* A4: AI-assisted instructor example. */
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include "values.h"
int main(void) {
    int mixed[] = {10, -4, 0};
    assert(sum_values(mixed, 3) == 6);
    assert(sum_values(mixed, 1) == 10);
    assert(sum_values(NULL, 0) == 0);
    puts("All sum tests passed.");
    return 0;
}
