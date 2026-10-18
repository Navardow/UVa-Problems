#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    // freopen("./input.txt", "r", stdin);

    int nums[3001], i, j, k, n;

    while (cin >> n) {
        i = 0;
        j = 0;
        k = 1;
        bool jo = true;
        int jar[3000];

        for (; i < n; i++) {
            cin >> nums[i];
            if (i > 0) {
                int r = nums[i] - nums[i - 1];
                r = r >= 0 ? r : -r;
                jar[j++] = r;
            }
        }

        sort(begin(jar), (begin(jar) + i) - 1);

        for (; k < i - 1; k++) {
            if (jar[k] - jar[k - 1] != 1) {
                jo = false;
                break;
            }
        }

        if (!jo)
            cout << "Not jolly\n";
        else
            cout << "Jolly\n";
    }

    return 0;
}
