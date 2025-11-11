#include <stdio.h>
#include <stdbool.h>

// Function to check if each row is valid
bool checkRows(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        bool seen[10] = {false};
        for (int j = 0; j < 9; j++) {
            int num = grid[i][j];
            if (num < 1 || num > 9 || seen[num]) {
                return false;
            }
            seen[num] = true;
        }
    }
    return true;
}

// Function to check if each column is valid
bool checkCols(int grid[9][9]) {
    for (int j = 0; j < 9; j++) {
        bool seen[10] = {false};
        for (int i = 0; i < 9; i++) {
            int num = grid[i][j];
            if (num < 1 || num > 9 || seen[num]) {
                return false;
            }
            seen[num] = true;
        }
    }
    return true;
}

// Function to check if each 3x3 box is valid
bool checkBoxes(int grid[9][9]) {
    for (int boxRow = 0; boxRow < 9; boxRow += 3) {
        for (int boxCol = 0; boxCol < 9; boxCol += 3) {
            bool seen[10] = {false};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = grid[boxRow + i][boxCol + j];
                    if (num < 1 || num > 9 || seen[num]) {
                        return false;
                    }
                    seen[num] = true;
                }
            }
        }
    }
    return true;
}

int main() {
    int grid[9][9];
    printf("Enter the 9x9 Sudoku grid (each row of 9 numbers separated by spaces):");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    if (checkRows(grid) && checkCols(grid) && checkBoxes(grid)) {
        printf("The Sudoku grid is valid!");
    } else {
        printf("The Sudoku grid is NOT valid.");
    }
    return 0;
}