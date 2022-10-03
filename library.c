#include <stdio.h>

#include "library.h"

int add_3_ints(int a, int b, int c) {
    return a + b + c;
}

void foo(int x) {
    printf("== this value was passed to foo(): %d\n", x);
}
