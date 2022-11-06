#pragma once
class Vector
{
	int* array;
	int size;
	int capacity;
public:
	Vector(int size = 0) : size{ size }
	{
		if (size < 5)
			capacity = 4;
		else
			capacity = size + size / 2;

		array = nullptr;
		if (size)
			array = new int[capacity] {};
	}

	Vector(const Vector& vector)
	{
		this->size = vector.size;
		this->capacity = vector.size;

		this->array = new int[this->capacity];
		for (int i = 0; i < this->size; i++)
			this->array[i] = vector.array[i];
	}

	~Vector()
	{
		if (array)
			delete[]array;
	}

	int Size();
	int Capacity();

	int& At(int index);
	int& operator[](int index);

	Vector operator=(const Vector& vector);

	void PushBack(int value);
	int PopBack();

	void Insert(int index, int value);
	int Replace(int index);
};

