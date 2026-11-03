/* A4: AI-assisted instructor example. */
#ifndef VALUES_H
#define VALUES_H
/* Preconditions: 0 <= length <= 1000; values designates length integers in
   [-1000, 1000], or may be NULL when empty. Borrows the array; no mutation/I/O. */
int sum_values(const int values[], int length);
#endif
