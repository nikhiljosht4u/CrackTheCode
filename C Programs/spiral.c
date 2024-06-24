/*
You are tasked with writing a C program that prints the elements of a matrix in spiral order.
The program should allow the user to input the dimensions of the matrix (number of rows and columns) and then the elements of the matrix.
*/

#include <stdio.h>
void spiralOrder(int rows, int cols, int matrix[rows][cols]) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    while (top <= bottom && left <= right) {
        // Print the top row
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;
        // Print the right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        // Print the bottom row if there are still rows remaining
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        // Print the left column if there are still columns remaining
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Spiral order of the matrix is:\n");
    spiralOrder(rows, cols, matrix);

    return 0;
}

