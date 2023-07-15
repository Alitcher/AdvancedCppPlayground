#pragma once

#include <vector>

template <typename T>
class Matrix
{
public:
    Matrix(int rows, int cols)
        : rows(rows), cols(cols), data(rows, std::vector<T>(cols)) {}

    void print() const
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    void setValue(int row, int col, T value)
    {
        if (row < 0 || row >= rows || col < 0 || col >= cols)
        {
            throw std::out_of_range("Invalid matrix index.");
        }
        data[row][col] = value;
    }

    Matrix<T> operator+(const Matrix<T> &other) const
    {
        if (rows != other.rows || cols != other.cols)
        {
            throw std::runtime_error("Matrix dimensions must be equal for addition.");
        }

        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix<T> operator*(const Matrix<T> &other) const
    {
        if (cols != other.rows)
        {
            throw std::runtime_error("Matrix dimensions are incompatible for multiplication.");
        }

        int resultRows = rows;
        int resultCols = other.cols;
        Matrix<T> result(resultRows, resultCols);
        for (int i = 0; i < resultRows; ++i)
        {
            for (int j = 0; j < resultCols; ++j)
            {
                T sum = 0;
                for (int k = 0; k < cols; ++k)
                {
                    sum += data[i][k] * other.data[k][j];
                }
                result.data[i][j] = sum;
            }
        }
        return result;
    }

private:
    int rows;
    int cols;
    std::vector<std::vector<T>> data;
};