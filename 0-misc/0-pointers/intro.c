#include <stdio.h>

int main(int argc, char *argv[])
{
    // pointers: vars that store address of another var
    int a; // 4 bytes
    char c; // 1 byte
    a = 5; // same 4 bytes
    a++; // same memory address
    a = 4;
    int b = 10; // new 4 byte memory address
    int *p; // initialize p pointer to point to an int addr, this has its own memory addr
    p = &a; // p == memory address of a, & is pointer, points to address of var
    printf("*p: %d\n", *p);
    printf("p = &a: %p\n", &a);
    a = 5;

    printf("Pointer to p = &a: %p\n", p); // prints data in memory address
    printf("&a: %p\n", &a); // prints data in memory address
    printf("&p: %p\n", &p); // prints mem addr of p
    printf("*p: %d\n", *p); // de-referencing: value at addr stored in p

    return 0;
}
