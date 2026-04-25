#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, n;

    // Input size
    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    // 1. Matrix Addition
    printf("\nAddition of matrices:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
  // 2. Saddle Point
    int found = 0;
    for(i=0;i<n;i++){
        int min = a[i][0], col = 0;
        for(j=1;j<n;j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }

        int k;
        for(k=0;k<n;k++){
            if(a[k][col] > min)
                break;
        }

        if(k == n){
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("\nNo Saddle Point\n");

    // 3. Inverse (only for 2x2 matrix)
    if(n == 2){
        int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

        if(det != 0){
            printf("\nInverse of matrix A:\n");
            printf("%.2f %.2f\n", (float)a[1][1]/det, (float)-a[0][1]/det);
            printf("%.2f %.2f\n", (float)-a[1][0]/det, (float)a[0][0]/det);
        } else {
            printf("\nInverse does not exist\n");
        }
    }

    // 4. Magic Square Check
    int magic = 1;
    int sum_row = 0;

    for(j=0;j<n;j++)
        sum_row += a[0][j];

    for(i=1;i<n;i++){
        int temp = 0;
        for(j=0;j<n;j++)
            temp += a[i][j];
        if(temp != sum_row)
            magic = 0;
    }

    for(j=0;j<n;j++){
        int temp = 0;
        for(i=0;i<n;i++)
            temp += a[i][j];
        if(temp != sum_row)
            magic = 0;
    }

    int diag1 = 0, diag2 = 0;
    for(i=0;i<n;i++){
        diag1 += a[i][i];
        diag2 += a[i][n-i-1];
    }

 if(diag1 != sum_row || diag2 != sum_row)
        magic = 0;

    if(magic)
        printf("\nMatrix A is a Magic Square\n");
    else
        printf("\nMatrix A is NOT a Magic Square\n");

    return 0;
}
