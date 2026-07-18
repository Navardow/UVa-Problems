#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    char ch;
    bool open;
    string result = "";
    freopen(argv[1], "r", stdin);
    while (scanf("%c", &ch) == 1) {
        if (ch == '"') {
            open = !open;
            result += open ? "``" : "''";
        } else {
            result += ch;
        }
    }
    printf("%s", result.c_str());
    return 0;
}
