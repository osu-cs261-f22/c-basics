#include <stdio.h>
#include <stdlib.h>

struct student {
    char* name;
    int id;
    double gpa;
};

int main() {
    int* n = malloc(sizeof(int));

    *n = 24;
    printf("== n: %p\n", n);
    printf("== *n: %d\n", *n);

    struct student* s = malloc(sizeof(struct student));
    s->name = "Leia Organa";
    s->id = 933222222;
    s->gpa = 4.0;

    int* array = malloc(128 * sizeof(int));
    for (int i = 0; i < 128; i++) {
        // *(array + i) = i;
        array[i] = i;
    }

    struct student* students = malloc(16 * sizeof(struct student));
    for (int i = 0; i < 16; i++) {
        students[i].name = "Leia Organa";
        students[i].id = 933222222;
        students[i].gpa = 4.0;
    }

    void** data = malloc(16 * sizeof(void*));

    free(n);
    free(n);
    free(s);
    free(array);
    free(students);
    free(data);
}
