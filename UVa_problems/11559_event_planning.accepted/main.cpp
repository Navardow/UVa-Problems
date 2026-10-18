#include <cstdio>

int main() {
    // freopen("./input.txt", "r", stdin);

    int N, B, H, W, p, a;
    while (scanf("%d %d %d %d", &N, &B, &H, &W) == 4) {
        int i = 0, w = W, min = 500010;
        for (; i < H; i++) {
            w = W;
            scanf("%d", &p);
            int cost = N * p;
            if (cost <= B && cost < min) {
                bool er = false;
                while (w--) {
                    scanf("%d", &a);
                    if (a >= N && !er)
                        er = true;
                }
                if (er)
                    min = cost;
            } // buget is enough
            else
                while (w--)
                    scanf("%d", &a);
        }
        // printf("%d", min);
        if (min > 500000)
            printf("stay home\n");
        else
            printf("%d\n", min);
    }

    return 0;
}
