#include <stdio.h>

int main(int argc, char *argv[], char* envp[])
{
    // dereference envp to avoid compilation warnings
    char size = sizeof(*envp) / sizeof(char);
    printf("sizeof(envp): %i\n", size);

    for (int x; x < size; x++)
    {
        printf("envp[%i]: %s\n", x, envp[x]);
    }

    // printf("envp[]: %s\n", envp);
    return 0;
}
