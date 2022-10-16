#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Vector.h"
#include "Matrix.h"




int main()
{
    srand(time(nullptr));

    /*Vector vect(5);

    for (int i = 0; i < vect.Size(); i++)
        vect.At(i) = rand() % 100;

    vect[200] = 100;

    for (int i = 0; i < vect.Size(); i++)
        std::cout << vect.At(i) << " ";
    std::cout << "\n";*/


    /*Matrix matrix(4, 5);

    for (int i = 0; i < matrix.Rows(); i++)
        for (int j = 0; j < matrix.Columns(); j++)
            matrix(i, j) = rand() % 100;

    for (int i = 0; i < matrix.Rows(); i++)
    {
        for (int j = 0; j < matrix.Columns(); j++)
            std::cout << matrix(i, j) << "\t";
        std::cout << "\n";
    }*/


    /*Accumulator acc(10);

    std::cout << acc(20);*/


    /*User users[5];
    
    strcpy(users[0].name, "Tim");
    users[0].age = 28;

    strcpy(users[1].name, "Joe");
    users[1].age = 19;

    strcpy(users[2].name, "Sammy");
    users[2].age = 44;

    strcpy(users[3].name, "Wiliam");
    users[3].age = 35;

    strcpy(users[4].name, "Mike");
    users[4].age = 21;

    for (int i = 0; i < 5; i++)
        std::cout << users[i] << "\n";
    std::cout << "\n";

    UserComparer comparer;
    UsersSort(users, 5, comparer);

    for (int i = 0; i < 5; i++)
        std::cout << users[i] << "\n";
    std::cout << "\n";*/


    Vector vect(5);
    for (int i = 0; i < vect.Size(); i++)
        vect.At(i) = rand() % 100;

    std::cout << "vect:\n";
    for (int i = 0; i < vect.Size(); i++)
        std::cout << vect.At(i) << " ";
    std::cout << "\n";

    Vector vect2;
    
    vect2 = vect;




    std::cout << "vect2:\n";
    for (int i = 0; i < vect2.Size(); i++)
        std::cout << vect2.At(i) << " ";
    std::cout << "\n";

    vect2[0] = 1000;
    std::cout << "vect:\n";
    for (int i = 0; i < vect.Size(); i++)
        std::cout << vect.At(i) << " ";
    std::cout << "\n";

    std::cout << "vect2:\n";
    for (int i = 0; i < vect2.Size(); i++)
        std::cout << vect2.At(i) << " ";
    std::cout << "\n";
}
