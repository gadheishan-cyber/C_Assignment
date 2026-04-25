#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nMenu:\n");
    printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of first string: %lu\n", strlen(str1));
            printf("Length of second string: %lu\n", strlen(str2));
            break;

        case 2:
            strcpy(temp, str1);
            printf("Copied string: %s\n", temp);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 4:
            result = strcmp(str1, str2);
            if(result == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 5:
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
