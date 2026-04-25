#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

int main() {
    int n, i;
    int male = 0, female = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        scanf("%s %s %s %s %f", emp[i].name, emp[i].designation,
              emp[i].gender, emp[i].doj, &emp[i].salary);

        if(strcmp(emp[i].gender, "Male") == 0)
            male++;
        else if(strcmp(emp[i].gender, "Female") == 0)
            female++;
    }

    printf("\nTotal number of employees = %d\n", n);
    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);

    printf("Employees with salary more than 10000:\n");
    for(i = 0; i < n; i++) {
        if(emp[i].salary > 10000)
            printf("%s\n", emp[i].name);
    }

    printf("Employees with designation AsstManager:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AsstManager") == 0)
            printf("%s\n", emp[i].name);
    }

    return 0;
}

