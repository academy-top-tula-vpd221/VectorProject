#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Vector.h"
#include "Matrix.h"
#include <vector>

using namespace std;

int main()
{
    srand(time(nullptr));

    Vector v1(10);
    cout << v1.Size() << " " << v1.Capacity() << "\n";
    
    v1.PushBack(20);
    cout << v1.Size() << " " << v1.Capacity() << "\n";
    for (int i = 0; i < v1.Size(); i++)
        cout << v1[i] << " ";
    cout << "\n";

    Vector v2 = v1;
    cout << v2.Size() << " " << v2.Capacity() << "\n";
    
    v2.PushBack(20);
    cout << v2.Size() << " " << v2.Capacity() << "\n";
}
