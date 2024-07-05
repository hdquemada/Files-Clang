#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    // Open the file in append mode
    file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Get a line of text from the user
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Write the line to the file
    fprintf(file, "%s", line);

    // Close the file
    fclose(file);

    printf("Line added to the file successfully.\n");

    return 0;
}