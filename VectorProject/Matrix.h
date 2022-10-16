#pragma once
class Matrix
{
	int** matrix;
	int columns;
	int rows;
public:
	Matrix(int c, int r) : columns{ c }, rows{ r }
	{
		//matrix = nullptr;
		matrix = new int* [rows];
		for (int i = 0; i < rows; i++)
			matrix[i] = new int[columns]{};
	}
	~Matrix()
	{
		for (int i = 0; i < rows; i++)
			delete[]matrix[i];
		delete[]matrix;
	}

	int Rows();
	int Columns();

	int& operator()(int row, int col);

};