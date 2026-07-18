#include <cassert>
#include <cstdio>
using namespace std;
/*
 * input 1.
 * the first line input is an N integer, followed by N lines,each starting with
 * a character 0 followed by a dot (.) then followed by an unknown nymber of
 * digits up to 100 digits and terminated by '...'.
 * */
void input1(char *file);

int main(int argc, char *argv[]) {

    // printf("%s", argv[1]);

    assert(argc == 2);

    input1(argv[1]);

    return 0;
}

void input1(char *file) {

    int N;
    char x[110];

    freopen(file, "r", stdin);

    scanf("%d\n", &N);
    while (N--) {
        scanf("0.%[0-9]...\n", x);
        printf("the digits are 0.%s\n", x);
    }

    freopen(file, "w", stdout);
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
    printf("hello\n");
}
