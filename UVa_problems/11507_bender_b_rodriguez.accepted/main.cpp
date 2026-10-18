#include <iostream>
#include <string>

using namespace std;

int main() {
    // freopen("./input.txt", "r", stdin);

    int L;
    string dir, bend;

    while (cin >> L, L) {
        cin.ignore();
        dir = "+x";
        while (L--, L > 0) {
            cin >> bend;
            // cout << L << "\n";

            // all bends while last direction was in +-x
            if (bend == "+y" && (dir == "+x" || dir == "-x")) {
                if (dir == "+x")
                    dir = "+y";
                else if (dir == "-x")
                    dir = "-y";
            } else if (bend == "-y" && (dir == "+x" || dir == "-x")) {
                if (dir == "+x")
                    dir = "-y";
                else if (dir == "-x")
                    dir = "+y";
            } else if (bend == "+z" && (dir == "+x" || dir == "-x")) {
                if (dir == "+x")
                    dir = "+z";
                else if (dir == "-x")
                    dir = "-z";
            } else if (bend == "-z" && (dir == "+x" || dir == "-x")) {
                if (dir == "+x")
                    dir = "-z";
                else if (dir == "-x")
                    dir = "+z";
            }

            // +-y as last dir
            else if (bend == "+y") {
                if (dir == "+y")
                    dir = "-x";
                else if (dir == "-y")
                    dir = "+x";
            } else if (bend == "-y") {
                if (dir == "+y")
                    dir = "+x";
                else if (dir == "-y")
                    dir = "-x";
            }

            // +-z as last dir
            else if (bend == "+z") {
                if (dir == "+z")
                    dir = "-x";
                else if (dir == "-z")
                    dir = "+x";
            } else if (bend == "-z") {
                if (dir == "+z")
                    dir = "+x";
                else if (dir == "-z")
                    dir = "-x";
            }
        }

        cin.ignore();
        cout << dir << "\n";
    }

    return 0;
}
