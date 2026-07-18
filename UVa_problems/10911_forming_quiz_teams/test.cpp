#include <cstdio>

int main() {
    printf("hello, world\n");

    int arr[1 << 3]{};
    arr[1 << 2] = 22727;

    for (int i = 0; i < (1 << 3); i++) {
        printf("%d\n", arr[i]);
    }
    printf("%lu\n", sizeof(arr) / sizeof(arr[0]));

    // all of the bit operators

    printf("%b\n", 3 | 5);
    printf("%b", 10);
    // 101
    // 101
    // ---
    // 101

    return 0;
}
