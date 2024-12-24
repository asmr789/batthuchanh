#include <stdio.h>
#define MAX_ROW 100
#define MAX_COL 100

int main() {
    int arr[MAX_ROW][MAX_COL];
    int n, m;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &n);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Mang chua sap xep: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            int min_index = j;
            for (int k = j + 1; k < m; k++) {
                if (arr[i][k] < arr[i][min_index]) { 
                    min_index = k;
                }
            }
            int temp = arr[i][min_index];
            arr[i][min_index] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    printf("Mang da sap xep: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}