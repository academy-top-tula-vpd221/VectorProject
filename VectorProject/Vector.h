#pragma once
class Vector
{
	int* array;
	int size;
public:
	Vector(int size = 0) : size{ size }
	{
		array = nullptr;
		if (size)
			array = new int[size] {};
	}

	Vector(const Vector& vector)
	{
		this->size = vector.size;
		this->array = new int[this->size];
		for (int i = 0; i < this->size; i++)
			this->array[i] = vector.array[i];
	}

	~Vector()
	{
		if (array)
			delete[]array;
	}

	int Size();
	int& At(int index);

	int& operator[](int index);

	Vector operator=(const Vector& vector);
};

