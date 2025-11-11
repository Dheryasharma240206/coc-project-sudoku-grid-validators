🧩 Sudoku Validator in C

This project is a simple Sudoku Validator written in C language.
It checks whether a given 9×9 Sudoku grid is valid according to standard Sudoku rules.

🚀 Features

✅ Checks if each row contains all digits (1–9) exactly once

✅ Checks if each column contains all digits (1–9) exactly once

✅ Checks if each 3×3 subgrid (box) contains all digits (1–9) exactly once

⚡ Simple and fast logic using basic loops and boolean arrays

🧠 How It Works

The program:

Takes a 9×9 Sudoku grid as input from the user.

Validates all rows, columns, and 3×3 boxes.

Prints whether the Sudoku grid is valid or not valid.

💻 Example Input
Enter the 9x9 Sudoku grid (each row of 9 numbers separated by spaces):
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9


Output:

The Sudoku grid is valid!

🛠️ Compilation & Execution

To compile and run the program:

gcc sudoku_validator.c -o sudoku_validator
./sudoku_validator

📂 File Structure
📁 Sudoku-Validator
 ├── sudoku_validator.c   # Main source code
 └── README.md            # Project description

👨‍💻 Author

Name: Dherya Sharma
College: JECRC Foundation
Department: Computer Science (AI Engineering)
