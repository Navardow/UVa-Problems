#include "string"
#include <cmath>
#include <cstdio>
using namespace std;

int main() {

    // freopen("./input.txt", "r", stdin);

    int tc;
    string ans;
    scanf("%d\n", &tc);

    while (tc--) {
        int cols, a, b, s, c = 0;
        ans = "yes";
        scanf("%d", &cols);
        scanf("%d %d\n", &a, &b);
        s = abs(a - b);
        cols--;
        while (cols--) {
            scanf("%d %d\n", &a, &b);
            if (abs(a - b) != s)
                ans = "no";
        }
        printf("%s\n", ans.c_str());
    }

    return 0;
}
