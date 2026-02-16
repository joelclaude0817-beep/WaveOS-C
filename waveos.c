#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome To WaveOS!\n");
    char option[100];

    while (1) {
        printf("waveos> ");
        fgets(option, sizeof(option), stdin);
        option[strcspn(option, "\n")] = 0; // Remove newline character

        if (strcmp(option, "help") == 0) {
            printf("help - Shows this help message\n");
            printf("wave - Activates the wave\n");
            printf("info - Shows the information\n");
            printf("version - Shows the version\n");
            printf("shutdown - Shutdowns the OS\n");
        } else if (strstr(option, "wave") != NULL) {
            printf("WAVE ACTIVATED🌊\n");
        } else if (strstr(option, "info") != NULL) {
            printf("Version: 1.0.0\n");
            printf("How it's made: With C\n");
        } else if (strstr(option, "version") != NULL) {
            printf("1.0.0\n");
        } else if (strstr(option, "shutdown") != NULL) {
            printf("Shutting down WaveOS...\n");
            break;
        } else {
            printf("Invalid Command: %s\n", option);
        }
    }
    return 0;
}
