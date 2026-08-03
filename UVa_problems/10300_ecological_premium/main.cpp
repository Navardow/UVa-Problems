#include <cstdio>

int main() {
    freopen("./input.txt", "r", stdin);

    /*
     * size of farmyard in sqr meters
     * number of animals he owns
     * environmental friendliness integer
     *
     * */

    int tc, f, a, b, c, tot;

    scanf("%d\n", &tc);

    while (tc--) {
        scanf("%d\n", &f);
        tot = 0;
        while (f--) {
            scanf("%d %d %d", &a, &b, &c);
            tot += a * c;
        }
        printf("%d\n", tot);
    }

    return 0;
}
