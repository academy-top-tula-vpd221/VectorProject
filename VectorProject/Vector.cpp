#include "Vector.h"
int Vector::Size()
{
	return this->size;
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
	this->array = new int[this->size];
	for (int i = 0; i < this->size; i++)
		this->array[i] = vector.array[i];
}