#include <iostream>

class Accumulator
{
    int value;
public:
    Accumulator(int start = 0) : value{ start } {}
    int Value() { return value; }
    int operator()(int value)
    {
        return this->value += value;
    }
};

class User
{
public:
    char name[50];
    int age;

    friend std::ostream& operator<<(std::ostream& out, const User& user)
    {
        out << "name: " << user.name << ", age: " << user.age;
        return out;
    }

    friend bool operator<(const User& u1, const User& u2)
    {
        return u1.age < u2.age;
    }
};

class UserComparer
{
public:
    bool operator()(int u1, int u2)
    {
        return u1 < u2;
        //return strcmp(u1, u2) < 0;
        //return strlen(u1.name) < strlen(u2.name);
    }
    bool operator()(char* u1, char* u2)
    {
        //return u1.age < u2.age;
        return strcmp(u1, u2) < 0;
        //return strlen(u1.name) < strlen(u2.name);
    }
};

bool UserLess(User u1, User u2)
{
    return u1.age < u2.age;
}


void UsersSort(User* users, int size, UserComparer comparer)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i; j < size; j++)
            //if (users[j] < users[minIndex])
            if (comparer(users[j].age, users[minIndex].age))
                //if(f(users[j], users[minIndex]))
                minIndex = j;
        User temp = users[i];
        users[i] = users[minIndex];
        users[minIndex] = temp;
    }
}