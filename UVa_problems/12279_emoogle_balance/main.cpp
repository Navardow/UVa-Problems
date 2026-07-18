#include <cstdio>

int main() {
    freopen("./input.txt", "r", stdin);
    int N, x, r, t, c = 0;
    while (scanf("%d", &N), N) {
        r = t = 0;
        while (N--) {
            scanf("%d", &x);
            if (x > 0 && x < 100)
                r++;
            else
                t++;
        }
        printf("CASE %d: %d\n", ++c, r - t);
    }

    return 0;
}
