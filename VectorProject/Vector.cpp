#include "Vector.h"
int Vector::Size()
{
	return this->size;
}
int Vector::Capacity()
{
	return this->capacity;
}


int& Vector::At(int index)
{
	if (index >= 0 && index < this->size)
		return this->array[index];
}

int& Vector::operator[](int index)
{
	if (index >= 0 && index < this->size)
		return this->array[index];
}

Vector Vector::operator=(const Vector& vector)
{
	if (this->array)
		delete[]this->array;

	this->size = vector.size;
	this->capacity = vector.size;

	this->array = new int[this->capacity];
	for (int i = 0; i < this->size; i++)
		this->array[i] = vector.array[i];

	return *this;
}

void Vector::PushBack(int value)
{
	if (size < capacity)
	{
		array[size++] = value;
		return;
	}

	capacity += size / 2;
	int* arrayNew = new int[capacity];
	for (int i = 0; i < size; i++)
		arrayNew[i] = array[i];
	arrayNew[size++] = value;

	delete array;
	array = arrayNew;
}

int Vector::PopBack()
{
	int value = array[--size];

	if (size < capacity / 2)
	{
		capacity -= size / 2;
		int* arrayNew = new int[capacity];
		for(int i = 0; i < size; i++)
			arrayNew[i] = array[i];

		delete array;
		array = arrayNew;
	}

	return value;
}