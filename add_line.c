#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file in append mode
    FILE *fp = fopen("text.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    // Get the line of text from the user
    char line[100];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Write the line to the file
    fprintf(fp, "%s", line);

    // Close the file
    fclose(fp);

    return 0;
}
