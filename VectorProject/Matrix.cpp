#include "Matrix.h"

int Matrix::Rows() { return rows; }
int Matrix::Columns() { return columns; }

int& Matrix::operator()(int row, int col)
{
	return matrix[row][col];
}