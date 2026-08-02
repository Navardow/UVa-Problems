#include <cstdio>
#include <cstring>

int main() {

    // freopen("./input.txt", "r", stdin);

    int tc;
    char s[1 << 16];

    scanf("%d\n", &tc);

    while (tc--) {
        scanf("%[0-9]\n", s);
        if (strcmp(s, "1") == 0 || strcmp(s, "78") == 0 || strcmp(s, "4") == 0)
            printf("+\n");
        int l = strlen(s);
        if (s[l - 2] == '3' && s[l - 1] == '5')
            printf("-\n");
        else if (s[0] == '9' && s[l - 1] == '4')
            printf("*\n");
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
            printf("?\n");
    }

    return 0;
}
