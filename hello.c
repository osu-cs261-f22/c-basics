#include <stdio.h>

int main(int argc, char** argv){
    /*
     * Program goes here...
     */

    int n = 16;

    double pi = 3.1415;
    float f_pi = 3.1415;

    char a = 'a';
    char* str = "Hello";

    n = 8;
    // n = 4.75;

    printf("Hello,\n\n\tworld!\n");

    printf("== n: %d, %4.2f, %%d, %s, %d\n", n, pi, str, 4 + 5);

    return 0;
}
