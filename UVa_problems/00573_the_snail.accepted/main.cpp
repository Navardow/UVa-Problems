#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);

    float H, U, D, F;
    float hc;

    while (scanf("%f %f %f %f", &H, &U, &D, &F), (H || U || D || F)) {

        hc = 0;
        float fatigue = U * (F / 100.0);
        int day = 1;

        for (;; day++) {

            if (U <= 0)
                U = 0;

            hc += U;

            if (hc > H)
                break;

            hc -= D;

            if (hc < 0)
                break;

            U -= fatigue;
        }

        printf("%s on day %d\n", hc > H ? "success" : "failure", day);
    }

    return 0;
}
