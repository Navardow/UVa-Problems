#include <cstdio>

int main() {
    // freopen("./input.txt", "r", stdin);

    int TC, ca = 1;
    scanf("%d", &TC);

    while (TC--) {
        int N, c, max = 0;
        scanf("%d", &N);
        while (N--) {
            scanf("%d", &c);
            if (c > max)
                max = c;
        }
        printf("Case %d: %d\n", ca++, max);
    }

    return 0;
}
