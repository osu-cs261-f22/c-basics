#include <stdio.h>

int main() {
    int n = 16;
    int* n_ptr = &n;

    printf("== n: %d\n", n);
    printf("== n_ptr: %p\n", n_ptr);
    printf("== &n: %p\n", &n);
    printf("== *n_ptr: %d\n", *n_ptr);

    *n_ptr = 8;
    printf("\n== n: %d\n", n);
    printf("== n_ptr: %p\n", n_ptr);
    printf("== &n: %p\n", &n);
    printf("== *n_ptr: %d\n", *n_ptr);

    int* n_ptr2 = NULL;
    printf("\n== n_ptr2: %p\n", n_ptr2);
    *n_ptr2 = 32;
}
