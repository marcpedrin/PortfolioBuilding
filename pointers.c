#include <stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};
    int *p = a;

    printf("p : %p\n", (void*)p);
    printf("p++ : %p\n", (void*)(p++));
    printf("p : %p\n", (void*)p);
    printf("++p : %p\n", (void*)(++p));
    printf("p : %p\n", (void*)p);
    printf("*p++ : %d\n", *p++);
    printf("p : %p\n", (void*)p);
    printf("*++p : %d\n", *++p);
    printf("p : %p\n", (void*)p);
    printf("++*p : %d\n", ++*p);
    printf("p : %p\n", (void*)p);
    


    return 0;
}
