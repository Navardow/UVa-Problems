#include <cassert>
#include <cstdio>

int main(int argc, char *argv[]) {
    assert(argc == 2);
    freopen(argv[1], "r", stdin);
    char ch;

    while (scanf("%c", &ch) != EOF) {
        printf("%c", ch);
    }

    return 0;
}
