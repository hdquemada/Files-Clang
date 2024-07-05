#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {
    // Define the regex pattern for a valid email address
    char* pattern = "^[A-Z][a-z]{2} \\d{2},\\d{3}.\\d$";

    // Compile the regex pattern
    regex_t regex;
    int ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        fprintf(stderr, "Error compiling regex\n");
        return 1;
    }

    // Input from the user
    char input[100];
    printf("Enter an email address: ");
    scanf("%s", input);

    // Match the input against the regex pattern
    ret = regexec(&regex, input, 0, NULL, 0);
    if (ret == 0) {
        printf("Valid email address!\n");
    } else if (ret == REG_NOMATCH) {
        printf("Invalid email address!\n");
    } else {
        fprintf(stderr, "Error matching regex\n");
    }

    // Free the regex
    regfree(&regex);

    return 0;
}

