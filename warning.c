/// file: warning.c
/// description: faulty code example that needs fixing.
/// @author RIT CS Dept.

#include <stdio.h>

/// compute a value.
int compute(int a) {
    int b = a * 5;
    return b;
}

/// main function
int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    //int x = 10; (commented out as this is never used.

    int y = compute(20);

    printf("%d\n", y);

    return 0;
}

