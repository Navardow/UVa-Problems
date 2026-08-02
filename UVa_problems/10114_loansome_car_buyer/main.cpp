#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);
    int lm, dr;
    float dp, la;

    while (scanf("%d %f %f %d\n", &lm, &dp, &la, &dr), lm > -1) {
        float mp = la / lm, per, jper, cv;
        int i_m, j_m, at = 0;
        bool found = false;

        while (dr--) {
            scanf("%d %f", &i_m, &per);
            if (i_m == 0) {
                cv = (la + dp) - per * (la + dp);
                j_m = i_m;
                jper = per;
                if (cv > la) {
                    found = true;
                    at = i_m;
                }
            } else {
                int mdiff = i_m - j_m;
                while (mdiff > 1) {
                    cv = cv - (jper * cv);
                    la -= mp;
                    if (!found && cv > la) {
                        found = true;
                        at = i_m - --mdiff;
                    }
                    mdiff--;
                }
                cv = cv - (per * cv);
                la -= mp;
                j_m = i_m;
                jper = per;
            }
        }
        while (!found && cv < la && i_m < lm) {
            cv = cv - (per * cv);
            la -= mp;
            i_m++;
            if (cv > la) {
                found = true;
                at = i_m;
            }
        }
        at > 1 ? printf("%d months\n", at) : printf("%d month\n", at);
    }
    return 0;
}
