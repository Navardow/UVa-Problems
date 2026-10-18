#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {

    // freopen("./input.txt", "r", stdin);

    int n, p, c = 1;
    string S;

    while (cin >> n >> p, n || p) {

        cin.ignore();

        float price, compliance = 0, fp = MAXFLOAT;
        int rm; // requirements met.
        string company = "";

        for (int i = 0; i < n; i++)
            getline(cin, S);

        for (int i = 0; i < p; i++) {
            getline(cin, S);
            cin >> price >> rm;
            cin.ignore();

            if ((float)rm / n > compliance) {
                compliance = (float)rm / n;
                company = S;
                fp = price;
            } else if ((float)rm / n == compliance && price < fp) {
                compliance = (float)rm / n;
                company = S;
                fp = price;
            }

            for (int i = 0; i < rm; i++)
                getline(cin, S);
        }

        if (c > 1)
            cout << '\n';
        cout << "RFP #" << c++ << '\n' << company << '\n';
    }

    return 0;
}
