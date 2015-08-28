#include <stdio.h>

const int num_row = 7;
const int num_col = 5;

int main() {
    int matrix[num_row][num_col];
    int row, col;

    for (row = 0; row < num_row; row++)
        for (col = 0; col < num_col; col++)
            matrix[row][col] = 5 * row + col;

    for (row = 0; row < num_row; row++)
        for (col = 0; col < num_col; col++) {
				if (col == (num_col-1)) {
					// printf("[%d][[%d] = %4d\n", row, col, matrix[row][col]);
					printf("%4d\n", matrix[row][col]);
				} else {
					// printf("[%d][[%d] = %4d", row, col, matrix[row][col]); 				
					printf("%4d", matrix[row][col]); 				
				}
            }

    return 0;
}

