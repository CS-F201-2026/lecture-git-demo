/* A4: AI-assisted instructor example. */
#include <stdio.h>
#include <stdlib.h>
#include "values.h"
int main(void) {
    int length;
    if (scanf("%d", &length) != 1 || length < 1 || length > 1000) {
        fprintf(stderr, "Invalid length.\n");
        return 1;
    }
    int *values = malloc((size_t)length * sizeof *values);
    if (values == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < length; i++) {
        if (scanf("%d", &values[i]) != 1 || values[i] < -1000 || values[i] > 1000) {
            fprintf(stderr, "Invalid value.\n");
            free(values);
            return 1;
        }
    }
    printf("Total: %d\n", sum_values(values, length));
    free(values);
    return 0;
}
