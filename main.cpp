/**
 * Alex Chheng
 * CECS 277 Lab 5
 */
//https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/
#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Matrix matrix1(3, 4);
    Matrix matrix2(3, 4);
    Matrix matrix3(4, 2);
    matrix1.input(); //Test 1 2 3 4 5 6 7 8 9 10 11 12, 3 2 3 1 4 4 5 1 4 4 1 5
    matrix2.input(); //Test 1 2 3 4 5 6 7 8 9 10 11 12, 4 3 1 3 3 5 1 5 4 5 1 4
    matrix3.input(); //Test 1 2 3 4 5 6 7 8, 4 1 5 5 3 4 2 1
    matrix1.print();
    matrix2.print();
    matrix3.print();

    Matrix resultAdd(3, 4);
    matrix1.add(matrix2, resultAdd);
    resultAdd.print();

    Matrix resultSub(3, 4);
    matrix1.subtract(matrix2, resultSub);
    resultSub.print();

    Matrix resultMulti(3, 2);
    matrix1.multiply(matrix3, resultMulti);
    resultMulti.print();

    bool repeat = true;
    string exit;
    int rowSize;
    int colSize;
    int rowMulti;
    int colMulti;

    while(repeat){
        cout << "Enter a 1st row size: " << endl;
        cin >> rowSize;
        cout << "Enter a 1st column size: " << endl;
        cin >> colSize;
        colMulti = colSize;

        Matrix matrix4(rowSize, colSize);

        cout << "Enter a 2st row size: " << endl;
        cin >> rowSize;
        cout << "Enter a 2st column size: " << endl;
        cin >> colSize;
        rowMulti = rowSize;

        Matrix matrix5(rowSize, colSize);

        matrix4.input();
        matrix5.input();

        Matrix resultAdd(rowSize, colSize);
        matrix4.add(matrix5, resultAdd);
        resultAdd.print();

        Matrix resultSub(rowSize, colSize);
        matrix4.subtract(matrix5, resultSub);
        resultSub.print();

        Matrix resultMulti(rowMulti, colMulti);
        matrix4.multiply(matrix5, resultMulti);
        resultMulti.print();

        cout << "Exit? Y/N" << endl;
        cin >> exit;
        if (exit == "Y" || exit == "y"){
            repeat = false;
        }
    }

    return 0;
}