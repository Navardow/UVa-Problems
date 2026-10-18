#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);

    int L;

    while (scanf("%d\n", &L), L) {
        int dis = 9999, tr = 0;
        char S;
        char init = '\0';
        // printf("%d", L);
        while (L--) {
            scanf("%c", &S);
            if (!dis)
                continue;

            if (S == 'Z') {
                dis = 0;
                continue;
            }

            if (!init && (S == 'R' || S == 'D')) {
                init = S;
                continue;
            }

            // main logic
            if (S == '.' && init) {
                tr++;
            } else if (init && S == init) {
                tr = 0;
            } else if (init && S != init && S != '.') {
                dis = tr + 1;
                tr = 0;
                init = S;
            }
        }
        printf("%d\n", dis);
    }

    return 0;
}
