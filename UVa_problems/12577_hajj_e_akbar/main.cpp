#include <cstdio>
#include <cstring>

int main() {

    char w[1 << 4];

    freopen("./input.txt", "r", stdin);

    while (scanf("%[A-Za-z]\n", w)) {
        strcmp(w, "Hajj") == 0 ? printf("Hajj-e-Akbar\n")
                               : printf("Hajj-e-Asghar\n");
    }
    return 0;
}
