#include <cstdio>
#include <cstring>

int main() {

    // freopen("./input.txt", "r", stdin);

    int tc, a, tot = 0;
    char w[1 << 4];
    scanf("%d\n", &tc);

    while (tc--) {
        scanf("%[a-z]", w);

        if (strcmp(w, "donate") == 0) {
            scanf("%d\n", &a);
            tot += a;
        } else {
            scanf("\n");
            printf("%d\n", tot);
        }
    }
    return 0;
}
