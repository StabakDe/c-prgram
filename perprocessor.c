#include <stdio.h>

// #define vai_dakha printf
#define MAX 100
#define even(x) (x%2==0?1:0)

int main() {
    // vai_dakha("hello world");
    printf("max=%d", MAX);
    printf("\nIs 10 even? %s", even(10) ? "Yes" : "No");
    return 0;
}