#include <cstdio>

int main() {

    freopen("./input.txt", "r", stdin);

    char W[1 << 3];
    int TC;

    scanf("%d", &TC);

    while (TC--) {
        scanf("%[a-z]\n", W);

        printf("%s\n", W);
    }

    return 0;
}
