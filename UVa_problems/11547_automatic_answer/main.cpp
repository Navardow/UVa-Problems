#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);
    int TC, n, res;
    scanf("%d", &TC);
    while (TC--) {
        scanf("%d", &n);
        res = ((n * 63 + 7492) * 5 - 498) % 100 / 10;
        printf("%d\n", res < 0 ? -res : res);
    }

    return 0;
}
