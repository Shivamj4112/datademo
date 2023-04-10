#include <stdio.h>

int main() {
    int rows=3, cols=3, i, j;
    
    
    
    int arr[rows][cols];
    
    printf("Enter array elements:\n");
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
     for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    printf("Row-wise sum of array:\n");
    
    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) {
            sum += arr[j][i];
        }
        printf("Row %d sum: %d\n", i , sum);
    }
    
    return 0;
}

