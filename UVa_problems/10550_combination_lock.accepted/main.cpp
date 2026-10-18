
#include <cstdio>
#include <math.h>
#include <string>
using namespace std;

int main() {
    // freopen("./input.txt", "r", stdin);
    int s, a, b, c;
    int ratio = 180 / 20;
    int total;
    string res;

    while (scanf("%d %d %d %d", &s, &a, &b, &c), (s || a || b || c)) {
        printf("%d\n", 9 * ((80 + (s - a + 40) % 40) +
                            (40 + (b - a + 40) % 40) + ((b - c + 40) % 40)));
    }
    return 0;
}

// 35 -> 5 == 10
//
