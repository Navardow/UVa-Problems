#include <algorithm>
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {

    freopen("./input.txt", "r", stdin);

    vector<string> b(5), w(5);
    string S;

    stringstream ss;

    while (getline(cin, S)) {
        ss << S;

        for (int i = 0; i < 5; i++)
            ss >> b[i];

        for (int i = 0; i < 5; i++)
            ss >> w[i];

        if (w[0][1] == w[1][1] == w[2][1] == w[3][1] == w[4][1]) {
        }

        // cout << black[0] << "\n";
        // cout << white[0] << "\n";

        sort(b.rbegin(), b.rend());
        sort(w.rbegin(), w.rend());

        if ((b[0][1] == b[1][1] == b[2][1] == b[3][1] == b[4][1]) &&
            (w[0][1] == w[1][1] == w[2][1] == w[3][1] == w[4][1])) {
            for (int i = 0; i < 5; i++) {
                if (b[i][0] > w[i][0]) {
                    cout << "black wins\n";
                    break;
                }
                if (w[i] > b[i]) {
                    cout << "white wins\n";
                    break;
                }
                if (i == 5) {
                    cout << "tie\n";
                    break;
                }
            }
            continue;
        }

        unordered_map<char, int> bf;
        unordered_map<char, int> wf;

        // cout << "black\t";
        for (auto i : b) {
            bf.try_emplace(bf[i[0]], 0);
            bf[i[0]]++;
        }

        for (auto i : w) {
            wf.try_emplace(wf[i[0]], 0);
            wf[i[0]]++;
        }

        for (auto it = bf.begin(); it != bf.end(); it++) {
            cout << "card: " << it->first << "\t" << it->second << "\n";
        }
        cout << "\n";

        // cout << "white\t";
        // for (auto i : white)
        //     cout << i << " ";
        // cout << "\n\n";

        // check both hand type.

        // if hand type the same then next check

        // cout << S << "\n";

        ss.clear();
    }

    return 0;
}
