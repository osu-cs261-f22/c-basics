#include <stdio.h>

#include "library.h"
#include "library.h"

struct student {
    char* name;
    int id;
    double gpa;
};

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

    struct student s1, s2;
    s1.name = "Luke Skywalker";
    s1.id = 933111111;
    s1.gpa = 3.75;

    s2.name = "Leia Organa";
    s2.id = 933222222;
    s2.gpa = 4.0;

    printf("\n== %s (%d) gpa: %f\n", s1.name, s1.id, s1.gpa);
    printf("\n== %s (%d) gpa: %f\n", s2.name, s2.id, s2.gpa);

    return 0;
}
