//
// Created by alexc on 10/3/2019.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <iostream>

using namespace std;

class Matrix
{
private:
    int rowSize;
    int colSize;
    int ** ptr;
public:
    Matrix (int rowSize, int colSize);
    ~Matrix ();
    Matrix operator + (Matrix & m);
    Matrix operator += (Matrix & m);
    Matrix operator += (const int &num);
    Matrix operator * (Matrix & m);
    Matrix operator ++();
    friend Matrix operator +(const int &num, const Matrix &m);
    friend istream& operator>> (istream& in, const Matrix& m);
    friend ostream &operator<<(ostream &os, const Matrix &m);
};


#endif //MATRIX_MATRIX_H
