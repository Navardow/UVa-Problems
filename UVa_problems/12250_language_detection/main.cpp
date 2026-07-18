#include <cstdio>
#include <cstring>

int main() {
    freopen("./input.txt", "r", stdin);

    char W[14];
    int c = 0;

    while (scanf("%[A-Z]\n", W)) {
        printf("CASE %d: ", ++c);
        if (strcmp(W, "HELLO") == 0)
            printf("ENGLISH\n");
        else if (strcmp(W, "HOLA") == 0)
            printf("SPANISH\n");
        else if (strcmp(W, "BONJOUR") == 0)
            printf("FRENCH\n");
        else if (strcmp(W, "HALLO") == 0)
            printf("GERMAN\n");
        else if (strcmp(W, "CIAO") == 0)
            printf("ITALIAN\n");
        else if (strcmp(W, "ZDRAVSTVUJTE") == 0)
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN");
    }
    return 0;
}
