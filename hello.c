#include <stdio.h>

#include "library.h"
#include "library.h"

int main(int argc, char** argv){
    /*
     * Program goes here...
     */

    int n = 16;
    int i, sum;

    double pi = 3.1415;
    float f_pi = 3.1415;

    char a = 'a';
    char* str = "Hello";

    n = 8;
    // n = 4.75;

    printf("Hello,\n\n\tworld!\n");

    printf("== n: %d, %4.2f, %%d, %s, %d\n", n, pi, str, 4 + 5);

    if (n >= 5) {
        printf("== n >= 5\n");
    } else if (n >= 2) {
        printf("== n >= 2\n");
    } else {
        printf("== n < 2\n");
    }

    printf("\n== for loop\n");
    for (i = 0; i < 10; i++) {
        printf("  -- i: %d\n", i);
    }

    printf("\n== while loop\n");
    i = 0;
    while (i < 10) {
        printf("  -- i: %d\n", i);
        i++;
    }

    sum = add_3_ints(1, 2, 3);
    printf("\n== sum: %d\n", sum);

    // sum = add_3_ints(1.25, 2.5, 3.1415);
    // printf("\n== sum: %d\n", sum);

    foo(16);

    return 0;
}

int add_3_ints(int a, int b, int c) {
    return a + b + c;
}

void foo(int x) {
    printf("== this value was passed to foo(): %d\n", x);
}
