#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destination.txt", "w");

    if (fp1 == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    ch = fgetc(fp1);

    while (ch != EOF) {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    return 0;
}

