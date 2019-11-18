//
// Created by alexc on 10/3/2019.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H


class Matrix
{
private:
    int rowSize;
    int colSize;
    int ** ptr;
public:
    Matrix(int rowSize, int colSize);
    ~Matrix();
    void add (const Matrix &second, Matrix &result) const;
    void subtract (const Matrix &second, Matrix &result) const;
    void multiply (const Matrix &second, Matrix &result) const;
    void input( ) const;//input the matrix from the keyboard
    void print() const; //display matrix to the console window
};


#endif //MATRIX_MATRIX_H
