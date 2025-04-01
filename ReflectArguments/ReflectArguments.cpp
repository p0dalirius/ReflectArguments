#include <cstdio>

int main(int argc, char* argv[]) {
    printf("[+] ReflectArguments - by Remi GASCOU (Podalirius)\n\n");
    printf("[+] argc: %d\n", argc);

    printf("[+] command line: ");
    for (int i = 0; i < argc; ++i) {
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "\n\n");
    }

    printf("[+] Arguments:\n");
    for (int i = 0; i < argc; ++i) {
        printf("[+]   | [%02d]: %s\n", i, argv[i]);
    }

    printf("\n[+] Press Enter to exit...\n");
    getchar();
    return 0;
}
