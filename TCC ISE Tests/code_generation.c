#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 15;
    int y = 25;

    int result = add(x, y);

    printf("Result = %d\n", result);

    return 0;
}