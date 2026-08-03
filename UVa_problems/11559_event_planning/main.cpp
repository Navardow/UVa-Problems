#include <cstdio>

int main() {
    freopen("./input.txt", "r", stdin);

    int N, B, H, W, p, a;

    while (scanf("%d %d %d %d\n", &N, &B, &H, &W) != EOF) {
        printf("%d\n", W);
        while (H--) {
            scanf("%d", &p);
            printf("%d\n", p);
            while (W--) {
                scanf("%d", &a);
                printf("%d\n", a);
                // break;
            }
            // break;
        }
        // break;
    }

    return 0;
}
