#include <cstdio>

int main() {

    // freopen("./input.txt", "r", stdin);
    int N, a, b;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &a, &b);
        if (a < b)
            printf("<");
        else if (a > b)
            printf(">");
        else
            printf("=");
        printf("\n");
    }

    return 0;
}
