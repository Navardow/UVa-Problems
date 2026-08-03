#include <cstdio>

int main() {

    freopen("./input.txt", "r", stdin);

    int m, dr;
    float dp, la;

    while (scanf("%d %f %f %d\n", &m, &dp, &la, &dr), m > 0) {
        int mi, mj, found = 0;
        float pi, pj;
        float cv = la + dp;

        float mp = la / (float)m;

        while (dr--) {
            scanf("%d %f\n", &mi, &pi);

            if (mi == 0) {
                cv -= cv * pi;
                mj = mi;
                pj = pi;
            } else {
                int i = 1;
                for (; i < mi - mj; i++) {
                    cv -= cv * pj;
                    la -= mp;
                    if (cv > la) {
                        found = mj + i;
                        break;
                    }
                }
                if (cv < la) {
                    cv -= cv * pi;
                    la -= mp;
                } else
                    continue;
                if (cv > la) {
                    found = mi;
                }
                pj = pi;
                mj = mi;
            }
        }
        if (cv < la) {
            found = mi;
            while (cv < la) {
                cv -= cv * pi;
                la -= mp;
                found++;
            }
        }

        found == 1 ? printf("%d month\n", found) : printf("%d months\n", found);

        // printf("car value: %f, loan amount: %f, found at: %d\n", cv, la,
        // found);
    }

    return 0;
}
