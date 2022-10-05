#include <stdio.h>

struct student {
    char* name;
    int id;
    double gpa;
};

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
    // *n_ptr2 = 32;

    struct student s;
    s.name = "Luke Skywalker";
    s.id = 933111111;
    s.gpa = 3.75;

    struct student* s_ptr = &s;

    // (*s_ptr).name
    printf("\n== %s (%d) gpa: %f\n", (*s_ptr).name, (*s_ptr).id, (*s_ptr).gpa);
    printf("== %s (%d) gpa: %f\n", s_ptr->name, s_ptr->id, s_ptr->gpa);

    void* v_ptr = n_ptr;
    printf("\n== v_ptr: %p\n", v_ptr);
    // printf("== *v_ptr: %d\n", *v_ptr);
    int* nv_ptr = v_ptr;
    printf("== *nv_ptr: %d\n", *nv_ptr);
    printf("== *(int*)v_ptr: %d\n", *(int*)v_ptr);

    v_ptr = s_ptr;
    printf("\n== v_ptr: %p\n", v_ptr);
    printf("== s_ptr: %p\n", s_ptr);
}
