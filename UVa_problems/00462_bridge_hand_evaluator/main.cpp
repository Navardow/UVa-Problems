#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    freopen("./input.txt", "r", stdin);
    int cc = 13;
    string cards[cc], line;
    int i = 0, points;
    int D = 0, C = 0, H = 0, S = 0;

    while (getline(cin, line), line[0]) {

        stringstream ss(line);
        points = 0;
        while (ss >> cards[i++]) {

            switch (cards[i - 1][0]) {
            case 'A':
                points += 4;
                break;
            case 'K':
                points += 3;
                break;
            case 'Q':
                points += 2;
                break;
            case 'J':
                points += 1;
                break;
            }

            switch (cards[i - 1][1]) {
            case 'S':
                S++;
                break;

            case 'H':
                H++;
                break;
            case 'C':
                C++;
                break;
            case 'D':
                D++;
                break;
            }
            // cout << cards[i - 1] << "\n";
        }

        if (S == 2)
            points++;

        if (H == 2)
            points++;

        if (C == 2)
            points++;

        if (D == 2)
            points += 2;

        if (S == 1)
            points += 2;

        if (H == 1)
            points += 2;

        if (C == 1)
            points += 2;

        if (D == 1)
            points += 2;

        if (S == 0)
            points += 2;

        if (H == 0)
            points += 2;

        if (C == 0)
            points += 2;

        if (D == 0)
            points += 2;

        for (int j = 0; j < cc; j++) {

            char suit = cards[j][1];
            int c, k;

            if (cards[j][0] == 'K') {
                c = 0;
                for (k = 0; k < cc; k++) {
                    if (k == j)
                        continue;

                    if (cards[k][1] == suit) {
                        c++;
                        break;
                    }
                }
                if (c == 0)
                    points--;
            }

            if (cards[j][0] == 'Q') {
                c = 0;

                for (int k = 0; k < cc; k++) {
                    if (k == j)
                        continue;
                    if (cards[k][1] == suit)
                        c++;
                }
                if (c == 0 || c == 1)
                    points--;
            }

            if (cards[j][0] == 'J') {
                c = 0;

                for (k = 0; k < cc; k++) {
                    if (k == j)
                        continue;
                    if (cards[j][1] == suit)
                        c++;
                }
                if (c >= 0 && c <= 2)
                    points--;
            }
        }
        cout << points << "\n";

        i = 0;
    }

    return 0;
}
