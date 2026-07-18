
/*
 * give two integers in one line, output their sum in one line.
 * */
#include <cassert>
#include <cstdio>

void tc_count(char *file);
void term_0(char *file);
void eof(char *file);
void eof_mod(char *file);
void var_ar(char *file);

int main(int argc, char *argv[]) {

    assert(argc == 2);

    char *file = argv[1];

    // tc_count(file);
    // term_0(file);
    // eof_mod(file);
    var_ar(file);
    return 0;
}

void tc_count(char *file) {

    int count, a, b;
    freopen(file, "r", stdin);

    scanf("%d", &count);

    while (count--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}

void term_0(char *file) {
    int a, b;

    freopen(file, "r", stdin);
    while (scanf("%d %d", &a, &b), (a || b)) /*chainign expressions and only the
                                             last expression controls the loop*/
    {
        printf("%d\n", a + b);
    }
}

void eof(char *file) {
    freopen(file, "r", stdin);
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF) /*check fo eof*/ {
        // can also check if input is less than 2 integers
        printf("%d\n", a + b);
    }
}

void eof_mod(char *file) {
    freopen(file, "r", stdin);
    int a, b, c = 1;

    while (scanf("%d %d", &a, &b) != EOF) /*check fo eof*/ {
        // can also check if input is less than 2 integers
        if (c > 1)
            printf("\n");
        printf(" case: %d: %d\n", c++, a + b);
    }
}

void var_ar(char *file) {
    int k, v, ans;

    freopen(file, "r", stdin);

    while (scanf("%d", &k) != EOF) {
        ans = 0;
        while (k--) {
            scanf("%d", &v);
            ans += v;
        }
        printf("%d\n", ans);
    }
}
