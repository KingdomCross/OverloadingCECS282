//
// Created by alexc on 10/3/2019.
//

//https://www.javatpoint.com/matrix-multiplication-in-cpp

#include <iostream>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int irowSize, int icolSize) {
    rowSize = irowSize;
    colSize = icolSize;

    ptr = new int *[rowSize];
    for (int i = 0; i < rowSize; i++){
        ptr[i] = new int[colSize];
    }
}

Matrix::~Matrix() {
    //delete[] **ptr;
}

void Matrix::add(const Matrix &second, Matrix &result) const {
    cout << "Adding matrix" << endl;
    cout << rowSize << " X " << colSize << endl;
    if(rowSize == second.rowSize && colSize == second.colSize){
        //cout << "Matrix match" << endl;
        for (int i = 0; rowSize > i; i++){
            for (int j = 0; colSize > j; j++){
                result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
            }
        }
    }
}

void Matrix::subtract(const Matrix &second, Matrix &result) const {
    cout << "Subtract matrix" << endl;
    cout << rowSize << " X " << colSize << endl;
    if(rowSize == second.rowSize && colSize == second.colSize){
        //cout << "Matrix match" << endl;
        for (int i = 0; rowSize > i; i++){
            for (int j = 0; colSize > j; j++){
                result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
            }
        }
    }
}

void Matrix::multiply(const Matrix &second, Matrix &result) const {
    cout << "Multiply matrix" << endl;

    if(colSize == second.rowSize){
        cout << rowSize << " X " << second.colSize << endl;
        for (int i = 0; rowSize > i; i++){
            for (int j = 0; colSize > j; j++){
                //mul[i][j]=0;
                result.ptr[i][j] = 0;
                for (int k = 0; colSize > k; k++){
                    //mul[i][j]+=a[i][k]*b[k][j];
                    result.ptr[i][j] += ptr[i][k] * second.ptr[k][j];
                }
            }
        }
    }
}

void Matrix::input() const {
    cout << "Input matrix" << endl;
    cout << rowSize << " X " << colSize << endl;

    for (int i = 0; rowSize > i; i++){
        for (int j = 0; colSize > j; j++){
            cin >> ptr[i][j];
        }
    }
}

void Matrix::print() const {
    for (int i = 0; rowSize > i; i++){
        for (int j = 0; colSize > j; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}
