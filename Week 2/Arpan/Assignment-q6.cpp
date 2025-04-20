#include <iostream>
using namespace std;

const int SIZE = 3;

void inputMatrix(int mat[SIZE][SIZE], const string& name) {
    cout << "Enter elements of matrix " << name << " (3x3):\n";
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            cin >> mat[i][j];
}

void printMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
}

void sumMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            result[i][j] = a[i][j] + b[i][j];
}

void transposeMatrix(int input[SIZE][SIZE], int output[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            output[j][i] = input[i][j];
}

int main() {
    int matA[SIZE][SIZE], matB[SIZE][SIZE];
    int sumOriginal[SIZE][SIZE], sumTransposed[SIZE][SIZE];
    int transA[SIZE][SIZE], transB[SIZE][SIZE];

    inputMatrix(matA, "A");
    inputMatrix(matB, "B");

    sumMatrices(matA, matB, sumOriginal);
    cout << "\nSum of Matrix A and Matrix B:\n";
    printMatrix(sumOriginal);

    transposeMatrix(matA, transA);
    transposeMatrix(matB, transB);

    cout << "\nTranspose of Matrix A:\n";
    printMatrix(transA);

    cout << "\nTranspose of Matrix B:\n";
    printMatrix(transB);

    sumMatrices(transA, transB, sumTransposed);
    cout << "\nSum of Transpose of A and Transpose of B:\n";
    printMatrix(sumTransposed);

    return 0;
}
