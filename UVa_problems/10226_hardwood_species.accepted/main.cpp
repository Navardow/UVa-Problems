#include <iomanip>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    // freopen("./input.txt", "r", stdin);

    int TC, c;
    string spec;

    cin >> TC;
    getline(cin, spec);
    cin.ignore();

    for (int i = 0; i < TC; i++) {
        c = 0;
        map<string, int> hm;

        while (getline(cin, spec), spec != "") {
            c++;

            hm.insert({spec, 0});
            hm[spec]++;
        }

        for (auto it = hm.begin(); it != hm.end();) {
            cout << it->first << " " << fixed << setprecision(4)
                 << (it->second / (float)c) * 100 << "\n";
            it++;
        }
        if (i != TC - 1)
            cout << "\n";
    }
}
