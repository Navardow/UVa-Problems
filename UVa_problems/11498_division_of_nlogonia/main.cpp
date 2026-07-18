
#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);
    int TC, N, M, x, y;

    while (scanf("%d", &TC), TC) {
        scanf("%d %d", &N, &M);
        while (TC--) {
            scanf("%d %d", &x, &y);
            if (x == N || y == M)
                printf("divisa\n");
            else if (x < N && y > M)
                printf("NO\n");
            else if (x > N && y > M)
                printf("NE\n");
            else if (x > N && y < M)
                printf("SE\n");
            else
                printf("SO\n");
        }
    }

    return 0;
}
