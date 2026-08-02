#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);

    int tc, l, w, h, c = 1;

    scanf("%d\n", &tc);

    while (tc--) {
        scanf("%d %d %d", &l, &w, &h);
        printf("Case %d: ", c++);
        if (l < 21 && w < 21 && h < 21)
            printf("good\n");
        else
            printf("bad\n");
    }

    return 0;
}
