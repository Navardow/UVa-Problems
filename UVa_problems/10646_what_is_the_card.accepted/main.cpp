#include <iostream>
#include <string>

using namespace std;

int main() {

    // freopen("./input.txt", "r", stdin);

    int TC, c = 1;
    cin >> TC;

    string cards[52];

    while (TC--) {
        int i = 0, y = 0, t = 26, x;

        while (i < 52)
            cin >> cards[i++];

        for (i = 0; i < 3; i++) {

            x = cards[t][0] - '0';

            if (x > 9)
                x = 10;

            y += x;
            t--;

            for (int j = 0; j < 10 - x; j++)
                t--;
        }

        if (y <= (t + 1))
            cout << "Case " << c++ << ": " << cards[y] << "\n";
        else
            cout << "Case " << c++ << ": " << cards[26 + y - (t + 1)] << "\n";
    }

    return 0;
}
