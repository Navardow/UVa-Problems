#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);

    int TC, S, s, l, r;

    scanf("%d", &TC);

    while (TC--) {
        scanf("%d", &S);
        l = 100, r = -1;
        while (S--) {
            scanf("%d", &s);
            if (s < l)
                l = s;
            if (s > r)
                r = s;
        }
        printf("%d\n", 2 * (r - l));
    }

    return 0;
}
