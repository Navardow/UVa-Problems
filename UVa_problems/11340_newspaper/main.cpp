#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    // freopen("./input.txt", "r", stdin);

    int tc, k, val, m;
    float tot;
    char ch;
    string line;

    cin >> tc;

    while (tc--) {
        unordered_map<char, int> hm;
        tot = 0;

        cin >> k;
        while (k--) {
            cin >> ch >> val;
            hm.insert({ch, val});
        }

        cin >> m;

        do {
            getline(cin, line);
            int i = 0;
            for (; i < line.length(); i++) {
                if (hm[line[i]] > 0) {
                    tot += hm[line[i]];
                }
            }
        } while (m--);
        cout << fixed << setprecision(2) << tot / 100 << "$\n";
    }
    return 0;
}
